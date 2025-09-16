# ANT-ACE

This project includes trunck version of ANT-ACE for external development, source code includes: air-infra; nn-addon; fhe-cmplr; Dockerfile.


## How to clone ANT-ACE

```
git clone -b dev https://github.com/ant-research/ace-compiler.git
```

## How to Build Image

```
docker build . -t ace:latest
```

## How to Build ANT-ACE

```
cmake -S fhe-cmplr \
    -B build -DFHE_WITH_SRC="air-infra;nn-addon" \
    -DAIR_CODE_CHECK=OFF \
    -DNN_CODE_CHECK=OFF \
    -DFHE_CODE_CHECK=OFF \
    -DBUILD_UNITTEST=OFF \
    -DBUILD_BENCH=OFF \
    -DFHE_ENABLE_SEAL=OFF \
    -DFHE_ENABLE_OPENFHE=OFF

cmake --build build -- -j
```

```
cmake --install build
```

