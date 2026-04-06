# Cpp-ConsoleApp-CMake-Template
A template for making a Console Application in C++ using CMake

## Usage Example
First clone the repo recursively.

### Windows example
Specify a generator manually like so:
```bash
$ cmake -S. -Bbuild -G"MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug
$ cmake --build build
$ .\build\windows_x86-64\Debug\Application.exe
```
Or use a predefined preset. <br>
For example, to use gcc and makefiles for a debug build on windows x86-64:
```bash
$ cmake --preset=windows_x86-64_debug_mingw-w64_makefiles
$ cmake --build build
$ .\build\windows_x86-64\Debug\Application.exe
```

### Linux example
Specify a generator manually like so:
```bash
$ cmake -S. -Bbuild -G"Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug
$ cmake --build build
$ ./build/linux_x86-64/Debug/Application
```
Or use a predefined preset. <br>
For example, to use gcc and makefiles for a debug build on linux x86-64:
```bash
$ cmake --preset=linux_x86-64_debug_gcc_makefiles
$ cmake --build build
$ ./build/linux_x86-64/Debug/Application
```

Note: Use `cmake --list-presets` to see all available presets
