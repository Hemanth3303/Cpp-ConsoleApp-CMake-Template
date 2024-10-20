# Cpp-ConsoleApp-CMake-Template
A template application for C++ using CMake

## Usage Example
Specify a generator manually like so: 
```bash
cmake -S. -Bbuild -G"MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug
```
Or use a predefined preset <br>
For example, to use the gcc and makefiles for a debug build on windows x86-64:
```bash
cmake --preset=windows_x86-64_debug_mingw_makefiles
```
Note: Use `cmake --list-presets` to see all available presets