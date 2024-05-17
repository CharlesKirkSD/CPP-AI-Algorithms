#! /bin/zsh
cd build
ls -alh
cmake -G "Ninja" -D CMAKE_CXX_COMPILER=clang++ ../
cd ../
ls -alh