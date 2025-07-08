# 

## 7.1 Testing the Inference Performance of Neural Networks for Fully Homomorphic Encryption

```
root@6a1886a1e253:/app# ls -l
total 2944612
-rw-r--r--  1 root root      32574 Jul  2 16:39 2
-rw-r--r--  1 root root       1944 Jul  1 23:44 2025_07_01_11_25.log
-rw-r--r--  1 root root      32602 Jul  2 16:41 2025_07_02_11_00.cgo25.log
-rw-r--r--  1 root root       1350 Jul  1 01:31 Dockerfile
drwxr-xr-x  1 root root       4096 Jul  1 01:44 FHE-MP-CNN
-rw-r--r--  1 root root        572 Jul  1 01:31 LEGAL.md
-rw-r--r--  1 root root       4050 Jul  1 09:03 README.md
drwxr-xr-x  1 root root       4096 Jul  1 11:20 ace-compiler
drwxr-xr-x  9 root root       4096 Jul  1 11:23 ace_cmplr
drwxr-xr-x  1 root root       4096 Jul  1 01:39 cifar
drwxr-xr-x  2 root root       4096 Jul  1 01:31 model
drwxr-xr-x 11 root root       4096 Jul  1 01:31 phantom-fhe
-rw-r--r--  1 root root        206 Jul  1 01:31 requirements.txt
-rwxr-xr-x  1 root root    1347560 Jul  2 11:02 resnet110_cifar10_pre.ace
-rw-r--r--  1 root root    1763139 Jul  2 11:02 resnet110_cifar10_pre.c
-rw-r--r--  1 root root 1081018816 Jul  2 11:02 resnet110_cifar10_pre.weight
-rwxr-xr-x  1 root root     655512 Jul  2 11:00 resnet20_cifar10_pre.ace
-rw-r--r--  1 root root     564903 Jul  2 11:00 resnet20_cifar10_pre.c
-rw-r--r--  1 root root  224782336 Jul  2 11:00 resnet20_cifar10_pre.weight
-rwxr-xr-x  1 root root     755464 Jul  2 11:01 resnet32_cifar100_pre.ace
-rw-r--r--  1 root root     728518 Jul  2 11:01 resnet32_cifar100_pre.c
-rw-r--r--  1 root root  338981568 Jul  2 11:01 resnet32_cifar100_pre.weight
-rwxr-xr-x  1 root root     739080 Jul  2 11:01 resnet32_cifar10_pre.ace
-rw-r--r--  1 root root     721432 Jul  2 11:00 resnet32_cifar10_pre.c
-rw-r--r--  1 root root  338947200 Jul  2 11:00 resnet32_cifar10_pre.weight
-rwxr-xr-x  1 root root     843104 Jul  2 11:01 resnet44_cifar10_pre.ace
-rw-r--r--  1 root root     877779 Jul  2 11:01 resnet44_cifar10_pre.c
-rw-r--r--  1 root root  453112064 Jul  2 11:01 resnet44_cifar10_pre.weight
-rwxr-xr-x  1 root root     943000 Jul  2 11:02 resnet56_cifar10_pre.ace
-rw-r--r--  1 root root    1034322 Jul  2 11:01 resnet56_cifar10_pre.c
-rw-r--r--  1 root root  567276928 Jul  2 11:01 resnet56_cifar10_pre.weight
drwxr-xr-x  1 root root       4096 Jul  2 12:54 scripts
```

## 7.2 Generalization Ability Test of Fully Homomorphic Encryption Compiler

```
root@7dea60d13fc5:/app# ls -l
total 2613172
-rw-r--r--  1 root root      11441 Jul  1 18:40 2025_07_01_15_12.asplos25.log
-rw-r--r--  1 root root        299 Jul  1 16:11 2025_07_01_16_11_acc_10.log
-rw-r--r--  1 root root       1350 Jul  1 01:31 Dockerfile
drwxr-xr-x  1 root root       4096 Jul  1 01:44 FHE-MP-CNN
-rw-r--r--  1 root root        572 Jul  1 01:31 LEGAL.md
-rw-r--r--  1 root root       6012 Jul  1 13:39 README.md
drwxr-xr-x  1 root root       4096 Jul  2 13:02 ace-compiler
drwxr-xr-x  9 root root       4096 Jul  2 13:05 ace_cmplr
drwxr-xr-x  9 root root       4096 Jul  1 15:12 ace_cmplr_omp
-rwxr-xr-x  1 root root     964296 Jul  1 15:14 alexnet_cifar10.ace
-rw-r--r--  1 root root     999665 Jul  1 15:13 alexnet_cifar10.c
-rw-r--r--  1 root root  312940352 Jul  1 15:13 alexnet_cifar10.weight
drwxr-xr-x  1 root root       4096 Jul  1 16:11 cifar
drwxr-xr-x  2 root root       4096 Jul  1 01:31 model
drwxr-xr-x 11 root root       4096 Jul  1 01:31 phantom-fhe
-rw-r--r--  1 root root        206 Jul  1 01:31 requirements.txt
-rwxr-xr-x  1 root root     954616 Jul  1 16:04 resnet20_cifar10_pre.ace
-rw-r--r--  1 root root    1003594 Jul  1 16:04 resnet20_cifar10_pre.c
-rw-r--r--  1 root root  224782336 Jul  1 16:04 resnet20_cifar10_pre.weight
drwxr-xr-x  1 root root       4096 Jul  2 13:01 scripts
-rwxr-xr-x  1 root root    1000256 Jul  1 16:27 squeezenet_cifar10.ace
-rw-r--r--  1 root root    1080815 Jul  1 16:26 squeezenet_cifar10.c
-rw-r--r--  1 root root  793849536 Jul  1 16:26 squeezenet_cifar10.weight
-rwxr-xr-x  1 root root     909992 Jul  1 17:29 vgg16_cifar10.ace
-rw-r--r--  1 root root     931329 Jul  1 17:29 vgg16_cifar10.c
-rw-r--r--  1 root root 1336347360 Jul  1 17:29 vgg16_cifar10.weight
```

## 7.3 Testing the Inference Accuracy of Neural Network Models for Fully homomorphic Encryption

```
root@7c320b84888a:/app# ls -l
total 2613228
-rw-r--r--  1 root root      74061 Jul  1 19:53 2025_07_01_11_17.asplos25.log
-rw-r--r--  1 root root        319 Jul  2 11:09 2025_07_02_11_09_acc_100.log
-rw-r--r--  1 root root       1350 Jul  1 01:31 Dockerfile
drwxr-xr-x  1 root root       4096 Jul  1 01:44 FHE-MP-CNN
-rw-r--r--  1 root root        572 Jul  1 01:31 LEGAL.md
-rw-r--r--  1 root root       4050 Jul  1 09:03 README.md
drwxr-xr-x  1 root root       4096 Jul  1 11:16 ace-compiler
drwxr-xr-x  9 root root       4096 Jul  1 11:17 ace_cmplr_omp
-rwxr-xr-x  1 root root     964296 Jul  1 11:19 alexnet_cifar10.ace
-rw-r--r--  1 root root     999665 Jul  1 11:18 alexnet_cifar10.c
-rw-r--r--  1 root root  312940352 Jul  1 11:18 alexnet_cifar10.weight
drwxr-xr-x  1 root root       4096 Jul  2 11:09 cifar
drwxr-xr-x  2 root root       4096 Jul  1 01:31 model
drwxr-xr-x 11 root root       4096 Jul  1 01:31 phantom-fhe
-rw-r--r--  1 root root        206 Jul  1 01:31 requirements.txt
-rwxr-xr-x  1 root root     954616 Jul  1 13:08 resnet20_cifar10_pre.ace
-rw-r--r--  1 root root    1003594 Jul  1 13:07 resnet20_cifar10_pre.c
-rw-r--r--  1 root root  224782336 Jul  1 13:07 resnet20_cifar10_pre.weight
drwxr-xr-x  1 root root       4096 Jul  1 11:17 scripts
-rwxr-xr-x  1 root root    1000256 Jul  1 14:12 squeezenet_cifar10.ace
-rw-r--r--  1 root root    1080815 Jul  1 14:11 squeezenet_cifar10.c
-rw-r--r--  1 root root  793849536 Jul  1 14:11 squeezenet_cifar10.weight
-rwxr-xr-x  1 root root     909992 Jul  1 17:00 vgg16_cifar10.ace
-rw-r--r--  1 root root     931329 Jul  1 16:59 vgg16_cifar10.c
-rw-r--r--  1 root root 1336347360 Jul  1 16:59 vgg16_cifar10.weight
```

## 7.4 Performance Testing of Fully homomorphic Compilation Systems for Hardware Accelerators

```
root@8e748962b90e:/app# ls -l
total 60
-rw-r--r-- 1 root root 1514 Jul  2 11:36 2025_07_02_11_20.log
-rw-r--r-- 1 root root 1350 Jul  1 01:31 Dockerfile
drwxr-xr-x 1 root root 4096 Jul  1 01:44 FHE-MP-CNN
-rw-r--r-- 1 root root  572 Jul  1 01:31 LEGAL.md
-rw-r--r-- 1 root root 6012 Jul  1 13:39 README.md
drwxr-xr-x 1 root root 4096 Jul  1 15:18 ace-compiler
drwxr-xr-x 9 root root 4096 Jul  1 14:07 ace_cmplr
drwxr-xr-x 1 root root 4096 Jul  1 01:39 cifar
drwxr-xr-x 2 root root 4096 Jul  1 01:31 model
drwxr-xr-x 1 root root 4096 Jul  1 14:04 phantom-fhe
-rw-r--r-- 1 root root  206 Jul  1 01:31 requirements.txt
drwxr-xr-x 1 root root 4096 Jul  1 13:39 scripts
```

```
root@8e748962b90e:/app# ls -l /app/ace-compiler/release/rtlib/build/example/
total 3486880
-rwxr-xr-x 1 root root    4915712 Jul  1 14:07 eg_rtphantom_add
-rwxr-xr-x 1 root root    4915720 Jul  1 14:07 eg_rtphantom_boot
-rwxr-xr-x 1 root root    4967768 Jul  1 14:07 relu
-rwxr-xr-x 1 root root 1319668272 Jul  1 15:59 resnet110_cifar10_gpu
-rwxr-xr-x 1 root root  246978912 Jul  1 14:14 resnet20_cifar10_gpu
-rwxr-xr-x 1 root root  390028360 Jul  1 14:38 resnet32_cifar100_gpu
-rwxr-xr-x 1 root root  389989888 Jul  1 14:26 resnet32_cifar10_gpu
-rwxr-xr-x 1 root root  533009680 Jul  1 14:54 resnet44_cifar10_gpu
-rwxr-xr-x 1 root root  676045208 Jul  1 15:16 resnet56_cifar10_gpu
```

## 7.5 runtime system testcase

```
root@7dea60d13fc5:/app# ls -l /app/ace-compiler/release/rtlib/build/example/            
total 4884
-rwxr-xr-x 1 root root 323776 Jul  2 13:12 eg_fhertlib_add
-rwxr-xr-x 1 root root 323816 Jul  2 13:12 eg_fhertlib_add_const
-rwxr-xr-x 1 root root 336888 Jul  2 13:12 eg_fhertlib_avg_pool
-rwxr-xr-x 1 root root 315184 Jul  2 13:12 eg_fhertlib_bootstrap
-rwxr-xr-x 1 root root 315200 Jul  2 13:12 eg_fhertlib_bootstrap_02
-rwxr-xr-x 1 root root 335648 Jul  2 13:12 eg_fhertlib_conv2d
-rwxr-xr-x 1 root root 332240 Jul  2 13:12 eg_fhertlib_gemm
-rwxr-xr-x 1 root root 333456 Jul  2 13:12 eg_fhertlib_gemm_02
-rwxr-xr-x 1 root root 323784 Jul  2 13:12 eg_fhertlib_mul_const
-rwxr-xr-x 1 root root 328512 Jul  2 13:12 eg_fhertlib_mul_const_rtv
-rwxr-xr-x 1 root root 323784 Jul  2 13:12 eg_fhertlib_relin
-rwxr-xr-x 1 root root 323792 Jul  2 13:12 eg_fhertlib_relin_02
-rwxr-xr-x 1 root root 386056 Jul  2 13:12 eg_fhertlib_relu
-rwxr-xr-x 1 root root 328064 Jul  2 13:12 eg_fhertlib_rotate
-rwxr-xr-x 1 root root 328064 Jul  2 13:12 eg_fhertlib_rotate_02
```