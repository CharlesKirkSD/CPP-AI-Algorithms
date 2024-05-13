# cd build_vs2022
# cmake ../
# cd ../

# The following script only works if launched from Developer Powershell for VS2022, or if VS Code was launched from Developer Powershell for VS2022.
# cd build_ninja
# cmake -G "Ninja" -D CMAKE_CXX_COMPILER=cl ../
# cd ../

# The following script does not work if launched from Developer Powershell for VS2022, or if VS Code was launched from Developer Powershell for VS2022.
cd build_ninja
cmake -G "Ninja" -D CMAKE_CXX_COMPILER=clang++ ../
cd ../
