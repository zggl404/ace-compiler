import math
from config import NUM_SLOTS


def get_num_rot(rep, bs, gs, ps):

    log_result = math.ceil(math.log2(rep))
    return log_result + (bs - 1) + (gs - 1) + (ps - 1)


def count_factors(n):
    if n < 1:
        return 0
    count = 0
    for i in range(1, int(n ** 0.5) + 1):
        if n % i == 0:
            if i * i == n:
                count += 1
            else:
                count += 2
    return count


def imra_cost_model_conv(nd, kd, num_slots, orig_bs, output_size):
    min_cost = nd * kd
    bs = pb = ps = cost = 0
    num_search = 0

    bs = orig_bs

    pb = nd
    if output_size > num_slots // 2:
        ps = 1
    else:
        ps = num_slots // 2 // output_size

    delta = 0
    num_ps = count_factors(nd)
    for i in range(1, ps + 1):
        if (nd % i != 0):
            continue
        delta += 1
        num_search += (num_ps + 1 - delta)
    if output_size > num_slots // 2:
        num_search = 1

    return bs, pb, ps, cost, num_search


def imra_cost_model(nd, kd, num_slots):
    min_cost = nd * kd
    bs = pb = ps = cost = 0
    num_search = 0

    # Generate all divisors of nd
    divisors = []
    for i in range(1, int(nd) + 1):
        if nd % i == 0:
            divisors.append(i)

    for curr_bs in divisors:
        curr_pb = nd // curr_bs
        max_ps = curr_pb

        for curr_ps in range(1, max_ps + 1):
            if (curr_pb % curr_ps != 0 or
                    (kd * curr_ps + nd > num_slots and kd != num_slots) or
                    (kd == num_slots and curr_ps > 1)):
                continue

            curr_rep = math.ceil((kd * curr_ps + nd) / kd)
            curr_cost = get_num_rot(curr_rep, curr_bs, curr_pb // curr_ps, curr_ps)
            num_search += 1

            if (curr_cost < min_cost) or (curr_cost == min_cost and curr_ps > ps):
                min_cost = curr_cost
                bs = curr_bs
                pb = curr_pb
                ps = curr_ps

    cost = min_cost
    return bs, pb, ps, cost, num_search


def search_conv(channel_in, height, width, channel_out, k, slots):
    x = y = z = 1
    spatial_size = height * width

    if spatial_size >= slots:
        # Spatial dimension too big for one ciphertext
        z = spatial_size // slots
        if spatial_size % slots != 0:
            z += 1

        # AIR_ASSERT: Ensure that height is divisible by z (for hardware alignment)
        assert height % z == 0, f"Height {height} must be divisible by z={z}"

        y = channel_in
        x = channel_out
    else:
        # Input can fit spatially in a single ciphertext; now shard across channels
        input_size = channel_in * spatial_size
        y = input_size // slots
        if input_size % slots != 0:
            y += 1

        # Find smallest y such that y divides channel_in
        while channel_in % y != 0:
            y += 1

        # Do the same for output
        output_size = channel_out * spatial_size
        x = output_size // slots
        if output_size % slots != 0:
            x += 1

        # Find smallest x such that x divides channel_out
        while channel_out % x != 0:
            x += 1

    PO = x
    PI = y

    # conv bs is k*k, blocked IRMA.
    bs = k * k
    ps = 1
    pb = 1
    num_search = 1

    if PO > 1 or PI > 1:
        pb = channel_in // PI
    else:
        nd = min(channel_in, channel_out)
        kd = max(channel_in, channel_out)
        bs, pb, ps, cost, num_search = imra_cost_model_conv(nd, kd, NUM_SLOTS, k * k, output_size)

    return PI, PO, num_search, pb, ps, bs
