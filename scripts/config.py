
NUM_SLOTS = 32768

SINGLE_OP_MAP = {
    # --- Convolution Layers (same for both contexts) ---
    'Conv1': {
        'fhelipe': 'conv_3x16x32x3',
        'mkr': 'conv_3x16x32x3'
    },
    'Conv2': {
        'fhelipe': 'conv_16x16x32x3',
        'mkr': 'conv_16x16x32x3'
    },
    'Conv3': {
        'fhelipe': 'conv_32x32x16x3',
        'mkr': 'conv_32x32x16x3'
    },
    'Conv4': {
        'fhelipe': 'conv_64x64x8x3',
        'mkr': 'conv_64x64x8x3'
    },
    'Conv1_Large': {
        'fhelipe': 'conv_64x64x56x3',
        'mkr': 'conv_64x64x56x3'
    },
    'Conv2_Large': {
        'fhelipe': 'conv_128x128x28x3',
        'mkr': 'conv_128x128x28x3'
    },
    'Conv3_Large': {
        'fhelipe': 'conv_256x256x14x3',
        'mkr': 'conv_256x256x14x3'
    },
    'Conv4_Large': {
        'fhelipe': 'conv_512x512x7x3',
        'mkr': 'conv_512x512x7x3'
    },

    # --- MVM Layers (different for each context) ---
    'MVM1': {
        'fhelipe': 'fc_4096x4096',
        'mkr': 'gemv_4096x4096'
    },
    'MVM2': {
        'fhelipe': 'fc_4096x25088',
        'mkr': 'gemv_4096x25088'
    }
}

E2E_MODEL_MAP = {
    'ResNet20': {
        'fhelipe': 'ace_fhelipe_resnet',
        'mkr': 'resnet20_cifar10'
    },
    'SqueezeNet': {
        'fhelipe': 'ace_fhelipe_squeezenet',
        'mkr': 'fhelipe_squeezenet'
    },
    'AlexNet': {
        'fhelipe': 'ace_fhelipe_alexnet',
        'mkr': 'fhelipe_alexnet'
    },
    'VGG11': {
        'fhelipe': 'ace_fhelipe_vgg11',
        'mkr': 'fhelipe_vgg11'
    },
    'MobileNet': {
        'fhelipe': 'ace_fhelipe_mobilenet',
        'mkr': 'fhelipe_mobilenet'
    },
    'ResNet18': {
        # 'fhelipe': '-',
        'mkr': 'resnet18_imagenet'
    },
    'SqueezeNet_Imagenet': {
        # 'fhelipe': '-',
        'mkr': 'squeezenet_imagenet'
    },
    'AlexNet_Imagenet': {
        # 'fhelipe': '-',
        'mkr': 'alexnet_imagenet'
    },
    'VGG11_Imagenet': {
        # 'fhelipe': '-',
        'mkr': 'vgg11_imagenet'
    },
    'MobileNet_Imagenet': {
        # 'fhelipe': '-',
        'mkr': 'mobilenet_imagenet'
    }
}

# Benchmark
MVM_BENCH = [
    {
        "name": "MVM1",
        "shape": [4096, 4096]  #
    },
    {
        "name": "MVM2",
        "shape": [4096, 32768]  # 25088 pad to 32768
    }
]

CONV_BENCH = [
    {
        "name": "Conv1",
        "input_shape": [4, 32, 32],  # padding divisible
        "weight_shape": [16, 3, 3, 3]
    },
    {
        "name": "Conv2",
        "input_shape": [16, 32, 32],
        "weight_shape": [16, 16, 3, 3]
    },
    {
        "name": "Conv3",
        "input_shape": [32, 16, 16],
        "weight_shape": [32, 32, 3, 3]
    },
    {
        "name": "Conv4",
        "input_shape": [64, 8, 8],
        "weight_shape": [64, 64, 3, 3]
    },
    {
        "name": "Conv1_Large",
        "input_shape": [64, 56, 56],
        "weight_shape": [64, 64, 3, 3]
    },
    {
        "name": "Conv2_Large",
        "input_shape": [128, 28, 28],
        "weight_shape": [128, 128, 3, 3]
    },
    {
        "name": "Conv3_Large",
        "input_shape": [256, 14, 14],
        "weight_shape": [256, 256, 3, 3]
    },
    {
        "name": "Conv4_Large",
        "input_shape": [512, 7, 7],
        "weight_shape": [512, 512, 3, 3]
    },
]
