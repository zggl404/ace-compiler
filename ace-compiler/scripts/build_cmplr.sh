#!/bin/bash

working_dir=`pwd`

usage() {
  echo "Usage: $0 Debug|Release [ant|seal|openfhe|phantom-fhe|heongpu|cheddar] [cuda_arch]"
}

# check build type
if [ "$1" != "Debug" -a "$1" != "Release" ]; then
  usage
  exit 0
fi
build_type=$1
build_dir=`echo $1 | tr 'A-Z' 'a-z'`
backend=`echo ${2:-ant} | tr 'A-Z' 'a-z'`
python_exe="${PYTHON_EXECUTABLE:-${Python3_EXECUTABLE:-}}"
if [ -z "$python_exe" -a -x /usr/bin/python3 ]; then
  python_exe=/usr/bin/python3
elif [ -z "$python_exe" ]; then
  python_exe=`command -v python3 2>/dev/null`
fi
python_cmake_opts=""
if [ -n "$python_exe" ]; then
  python_cmake_opts="-DPYTHON_EXECUTABLE=$python_exe -DPython3_EXECUTABLE=$python_exe"
fi

cmake_backend_opts=""
case "$backend" in
  ant)
    cmake_backend_opts="-DFHE_ENABLE_SEAL=OFF -DFHE_ENABLE_OPENFHE=OFF -DFHE_ENABLE_PHANTOM=OFF -DFHE_ENABLE_HEONGPU=OFF -DFHE_ENABLE_CHEDDAR=OFF -DFHE_ENABLE_CUDA=OFF"
    ;;
  seal)
    if [ -z "$RTLIB_SEAL_PATH" ]; then
      echo "Error: backend 'seal' requires env RTLIB_SEAL_PATH."
      echo "Example: export RTLIB_SEAL_PATH=/path/to/seal/install"
      exit 1
    fi
    cmake_backend_opts="-DFHE_ENABLE_SEAL=ON -DFHE_ENABLE_OPENFHE=OFF -DFHE_ENABLE_PHANTOM=OFF -DFHE_ENABLE_HEONGPU=OFF -DFHE_ENABLE_CHEDDAR=OFF -DFHE_ENABLE_CUDA=OFF"
    ;;
  openfhe)
    if [ -z "$RTLIB_OPENFHE_PATH" ]; then
      echo "Error: backend 'openfhe' requires env RTLIB_OPENFHE_PATH."
      echo "Example: export RTLIB_OPENFHE_PATH=/path/to/openfhe/install"
      exit 1
    fi
    cmake_backend_opts="-DFHE_ENABLE_SEAL=OFF -DFHE_ENABLE_OPENFHE=ON -DFHE_ENABLE_PHANTOM=OFF -DFHE_ENABLE_HEONGPU=OFF -DFHE_ENABLE_CHEDDAR=OFF -DFHE_ENABLE_CUDA=OFF"
    ;;
  phantom-fhe|phantom)
    if [ -z "$CUDACXX" -o ! -x "$CUDACXX" ]; then
      for nvcc_candidate in /usr/local/cuda/bin/nvcc /usr/local/cuda-*/bin/nvcc; do
        if [ -x "$nvcc_candidate" ]; then
          CUDACXX="$nvcc_candidate"
          export CUDACXX
          break
        fi
      done
    fi
    if [ -z "$CUDACXX" -o ! -x "$CUDACXX" ]; then
      echo "Error: backend 'phantom-fhe' requires CUDA toolkit (nvcc)."
      echo "Please install CUDA and/or export CUDACXX=/path/to/nvcc."
      exit 1
    fi
    cuda_arch="${3:-$CMAKE_CUDA_ARCHITECTURES}"
    if [ -z "$cuda_arch" ]; then
      echo "Error: backend 'phantom-fhe' requires CUDA arch setting."
      echo "Please pass it as the 3rd arg (e.g. 80) or export CMAKE_CUDA_ARCHITECTURES."
      exit 1
    fi
    cmake_backend_opts="-DFHE_ENABLE_SEAL=OFF -DFHE_ENABLE_OPENFHE=OFF -DFHE_ENABLE_PHANTOM=ON -DFHE_ENABLE_HEONGPU=OFF -DFHE_ENABLE_CHEDDAR=OFF -DFHE_ENABLE_CUDA=ON -DCMAKE_CUDA_COMPILER=$CUDACXX -DCMAKE_CUDA_ARCHITECTURES=$cuda_arch"
    ;;
  heongpu)
    if [ -z "$CUDACXX" -o ! -x "$CUDACXX" ]; then
      for nvcc_candidate in /usr/local/cuda/bin/nvcc /usr/local/cuda-*/bin/nvcc; do
        if [ -x "$nvcc_candidate" ]; then
          CUDACXX="$nvcc_candidate"
          export CUDACXX
          break
        fi
      done
    fi
    if [ -z "$CUDACXX" -o ! -x "$CUDACXX" ]; then
      echo "Error: backend 'heongpu' requires CUDA toolkit (nvcc)."
      echo "Please install CUDA and/or export CUDACXX=/path/to/nvcc."
      exit 1
    fi
    cuda_arch="${3:-$CMAKE_CUDA_ARCHITECTURES}"
    if [ -z "$cuda_arch" ]; then
      echo "Error: backend 'heongpu' requires CUDA arch setting."
      echo "Please pass it as the 3rd arg (e.g. 80) or export CMAKE_CUDA_ARCHITECTURES."
      exit 1
    fi
    cmake_backend_opts="-DFHE_ENABLE_SEAL=OFF -DFHE_ENABLE_OPENFHE=OFF -DFHE_ENABLE_PHANTOM=OFF -DFHE_ENABLE_HEONGPU=ON -DFHE_ENABLE_CHEDDAR=OFF -DFHE_ENABLE_CUDA=ON -DCMAKE_CUDA_COMPILER=$CUDACXX -DCMAKE_CUDA_ARCHITECTURES=$cuda_arch"
    ;;
  cheddar)
    if [ -z "$CUDACXX" -o ! -x "$CUDACXX" ]; then
      for nvcc_candidate in /usr/local/cuda/bin/nvcc /usr/local/cuda-*/bin/nvcc; do
        if [ -x "$nvcc_candidate" ]; then
          CUDACXX="$nvcc_candidate"
          export CUDACXX
          break
        fi
      done
    fi
    if [ -z "$CUDACXX" -o ! -x "$CUDACXX" ]; then
      echo "Error: backend 'cheddar' requires CUDA toolkit (nvcc)."
      echo "Please install CUDA and/or export CUDACXX=/path/to/nvcc."
      exit 1
    fi
    cuda_arch="${3:-$CMAKE_CUDA_ARCHITECTURES}"
    if [ -z "$cuda_arch" ]; then
      echo "Error: backend 'cheddar' requires CUDA arch setting."
      echo "Please pass it as the 3rd arg (e.g. 80) or export CMAKE_CUDA_ARCHITECTURES."
      exit 1
    fi
    cmake_backend_opts="-DFHE_ENABLE_SEAL=OFF -DFHE_ENABLE_OPENFHE=OFF -DFHE_ENABLE_PHANTOM=OFF -DFHE_ENABLE_HEONGPU=OFF -DFHE_ENABLE_CHEDDAR=ON -DFHE_ENABLE_CUDA=ON -DCMAKE_CUDA_COMPILER=$CUDACXX -DCMAKE_CUDA_ARCHITECTURES=$cuda_arch"
    ;;
  *)
    echo "Error: unsupported backend '$backend'."
    usage
    exit 1
    ;;
esac

if [ "$backend" = "phantom" -o "$backend" = "phantom-fhe" -o "$backend" = "heongpu" -o "$backend" = "cheddar" ]; then
  echo "Info: build type=$build_type backend=$backend cuda_arch=$cuda_arch"
else
  echo "Info: build type=$build_type backend=$backend"
fi

# check directory
check_source_directory() {
  if [ ! -d ./$1 ]; then
    echo "Error: not find ./$1. make sure running this script in the same directory with $1"
    exit 0
  fi
}
check_source_directory air-infra
check_source_directory nn-addon
check_source_directory fhe-cmplr

# configure compiler with cmake
cmake -S fhe-cmplr -B $build_dir \
  -DFHE_WITH_SRC="air-infra;nn-addon" \
  -DBUILD_UNITTEST=OFF \
  -DAIR_BUILD_EXAMPLE=OFF \
  -DBUILD_BENCH=OFF \
  -DCMAKE_BUILD_TYPE=$build_type \
  -DAIR_CODE_CHECK=OFF \
  -DNN_CODE_CHECK=OFF \
  -DFHE_CODE_CHECK=OFF \
  $python_cmake_opts \
  $cmake_backend_opts
if [ $? -ne 0 ]; then
  echo "Error: configure project with CMake failed."
  exit 1
fi

cmake --build $build_dir -j
if [ $? -ne 0 ]; then
  echo "Error: build project with CMake failed."
  exit 2
fi

cmake --install $build_dir --prefix $working_dir/ace_cmplr
if [ $? -ne 0 ]; then
  echo "Error: compiler install failed."
  exit 3
fi

echo "Info: build project succeeded. FHE compiler executable can be found in $working_dir/ace_cmplr/bin/fhe_cmplr"
exit 0
