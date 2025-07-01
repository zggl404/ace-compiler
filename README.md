# Test Content

## Preparing a DOCKER environment to Build and Test 

- Pull the pre-built docker image from Docker Hub

    Run on CPU for testing 7.1, 7.2, 7.3
    Run on GPU for testing 7.4

    ```
    docker pull opencc/ace:20250524
    ```

- If you want to Build Docker Image locally, you can execute the following command

    ```
    docker build . -t opencc/ace:20250524
    ```

## 1. Testing the Inference Performance of Neural Networks for Fully Homomorphic Encryption

- Setup

    ```
    docker pull opencc/ace:20250524
    docker run -it -d --name test_7.1 opencc/ace:20250524 bash
    docker exec -it test_7.1 bash
    ```

- Build

    ```
    python3 /app/FHE-MP-CNN/build_cnn.py
    /app/scripts/build_cmplr.sh Release
    ```

- Inference

    ```
    nohup python3 /app/scripts/perf.py -a > /dev/null 2>&1 &
    ```

## 2 Generalization Ability Test of Fully Homomorphic Encryption Compiler

- Setup

    ```
    docker pull opencc/ace:20250524
    docker run -it -d --name test_7.2 opencc/ace:20250524 bash
    docker exec -it test_7.2 bash
    ```

- Build

    ```
    /app/scripts/build_cmplr_omp.sh Release
    ```

- Inference

    ```
    nohup python3 /app/scripts/resbm.py -n 10 > /dev/null 2>&1 &
    ```

## 3 Testing the Inference Accuracy of Neural Network Models for Fully homomorphic Encryption

- Setup

    ```
    docker pull opencc/ace:20250524
    docker run -it -d --name test_7.3 opencc/ace:20250524 bash
    docker exec -it test_7.3 bash
    ```

- Build

    ```
    /app/scripts/build_cmplr_omp.sh Release
    ```

- Inference

    ```
    nohup python3 /app/scripts/resbm.py -n 100 > /dev/null 2>&1 &
    ```

## 4. Performance Testing of Fully homomorphic Compilation Systems for Hardware Accelerators

- Setup

    ```
    docker pull opencc/ace:20250524
    docker run -it -d --name test_7.4 --gpus '"device=1"' opencc/ace:20250524 bash
    docker exec -it test_7.4 bash
    ```

    H20
    ```
    root@99c62073fab2:/app# nvidia-smi 
    Sun Jun 29 18:40:19 2025       
    +-----------------------------------------------------------------------------------------+
    | NVIDIA-SMI 550.144.03             Driver Version: 550.144.03     CUDA Version: 12.4     |
    |-----------------------------------------+------------------------+----------------------+
    | GPU  Name                 Persistence-M | Bus-Id          Disp.A | Volatile Uncorr. ECC |
    | Fan  Temp   Perf          Pwr:Usage/Cap |           Memory-Usage | GPU-Util  Compute M. |
    |                                         |                        |               MIG M. |
    |=========================================+========================+======================|
    |   0  NVIDIA H20                     Off |   00000000:26:00.0 Off |                    0 |
    | N/A   40C    P0             74W /  500W |       4MiB /  97871MiB |      0%      Default |
    |                                         |                        |             Disabled |
    +-----------------------------------------+------------------------+----------------------+
                                                                                            
    +-----------------------------------------------------------------------------------------+
    | Processes:                                                                              |
    |  GPU   GI   CI        PID   Type   Process name                              GPU Memory |
    |        ID   ID                                                               Usage      |
    |=========================================================================================|
    |  No running processes found                                                             |
    +-----------------------------------------------------------------------------------------+
    ```

    A100:
    ```
    root@7a4253dbaa94:/app# nvidia-smi
    Tue Jul  1 12:19:42 2025
    +-----------------------------------------------------------------------------------------+
    | NVIDIA-SMI 570.144                Driver Version: 570.144        CUDA Version: 12.8     |
    |-----------------------------------------+------------------------+----------------------+
    | GPU  Name                 Persistence-M | Bus-Id          Disp.A | Volatile Uncorr. ECC |
    | Fan  Temp   Perf          Pwr:Usage/Cap |           Memory-Usage | GPU-Util  Compute M. |
    |                                         |                        |               MIG M. |
    |=========================================+========================+======================|
    |   0  NVIDIA A100 80GB PCIe          Off |   00000000:36:00.0 Off |                    0 |
    | N/A   44C    P0             45W /  300W |       0MiB /  81920MiB |      0%      Default |
    |                                         |                        |             Disabled |
    +-----------------------------------------+------------------------+----------------------+
                                                                                            
    +-----------------------------------------------------------------------------------------+
    | Processes:                                                                              |
    |  GPU   GI   CI              PID   Type   Process name                        GPU Memory |
    |        ID   ID                                                               Usage      |
    |=========================================================================================|
    |  No running processes found                                                             |
    +-----------------------------------------------------------------------------------------+
    ```

- Build

    ```
    python3 /app/scripts/build_phantom-fhe.py
    /app/scripts/build_cmplr_gpu.sh Release  2>&1 &      # About three hours
    ```

- Inference

    ```
    nohup python3 /app/scripts/perf_gpu.py -a > /dev/null 2>&1 &
    ```