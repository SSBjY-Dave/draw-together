# DrawTogether

DrawTogether is a collaborative cross-platform  drawing application.
You can draw on a shared canvas with your friends with realtime sharing between clients.

## Dependencies

### Compiler
The used compiler must have C++20 support!

#### Windows
We recommend MSVC because MinGW has a bug which prevents OpenSSL's recipe to build.

#### Linux
On linux you can use GCC or Clang.

### Conan
Conan is needed to install the dependencies. It can be installed with pip: ``pip install conan``

For other download options please visit: https://conan.io/downloads.html

#### Download and build dependencies
If you are fine using the default compiler you can use the install-dependencies.bat/.sh files.

If you want to change the used compiler or conan asks you to specify compiler settings use the following commands:

    > cd build
    build> conan install .. --build missing -s compiler=COMPILER_NAME -s compiler.libcxx=STDLIB_NAME -s compiler.version=COMPILER_VERSION

- COMPILER_NAME: The selected compiler (gcc/clang/msvc)
- STDLIB_NAME:
    - GCC: libstdc++11
    - Clang/LLVM: libc++
    - MSVC: libc++
