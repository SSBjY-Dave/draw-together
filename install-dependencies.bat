cd build
conan install .. --build missing -s compiler=gcc -s compiler.libcxx=libstdc++11 -s compiler.version=10.2
pause