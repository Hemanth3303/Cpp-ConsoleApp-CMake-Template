#include <iostream>

#include "cversion/cversion.h"
#include "cppversion/cppversion.hpp"

void printConfigInfo();
void printArchitectureInfo();
void printOSInfo();
void printCompilerInfo();

int main(int argc, char **argv) {
    cversion();
    cppversion();

	printConfigInfo();
	printOSInfo();
	printArchitectureInfo();
	printCompilerInfo();

    std::cout << "Press Enter Key To Exit...";
    std::cin.get();

    return 0;
}

void printConfigInfo() {
#if defined(APPLICATION_DEBUG_BUILD)
    std::cout << "APPLICATION: Debug Build\n";
#elif defined(APPLICATION_PROFILE_BUILD)
    std::cout << "APPLICATION: Profile Build\n";
#elif defined(APPLICATION_RELEASE_BUILD)
    std::cout << "APPLICATION: Release Build\n";
#else
    std::cout << "APPLICATION: Unknown Build\n";
#endif
}

void printArchitectureInfo() {
    std::cout << "ARCHITECTURE: ";
#if defined(APPLICATION_ARCHITECTURE_X86_64)
    std::cout << "x86-64";
#elif defined(APPLICATION_ARCHITECTURE_X86_32)
    std::cout << "x86-32";
#elif defined(APPLICATION_ARCHITECTURE_AARCH64)
    std::cout << "aarch64";
#elif defined(APPLICATION_ARCHITECTURE_AARCH32)
    std::cout << "aarch32";
#elif defined(APPLICATION_ARCHITECTURE_RISCV64)
    std::cout << "riscv64";
#elif defined(APPLICATION_ARCHITECTURE_RISCV32)
    std::cout << "riscv32";
#elif defined(APPLICATION_ARCHITECTURE_UNKNOWN)
    std::cout << "unknown";
#else
    std::cout << "unknown";
#endif
    std::cout << "\n";
}

void printOSInfo() {
    std::cout << "OS: ";
#if defined(APPLICATION_OS_WINDOWS)
    std::cout << "Windows";
#elif defined(APPLICATION_OS_LINUX)
    std::cout << "Linux";
#elif defined(APPLICATION_OS_DARWIN)
    std::cout << "Darwin";
#elif defined(APPLICATION_OS_FREEBSD)
    std::cout << "FreeBSD";
#elif defined(APPLICATION_OS_OPENBSD)
    std::cout << "OpenBSD";
#elif defined(APPLICATION_OS_NETBSD)
    std::cout << "NetBSD";
#elif defined(APPLICATION_OS_ANDROID)
    std::cout << "Android";
#elif defined(APPLICATION_OS_EMSCRIPTEN)
    std::cout << "Emscripten WebAssembly";
#elif defined(APPLICATION_OS_IOS)
    std::cout << "iOS";
#elif defined(APPLICATION_OS_UNKNOWN)
    std::cout << "Unknown";
#else
    std::cout << "Unknown";
#endif
    std::cout << "\n";
}

void printCompilerInfo() {
    std::cout << "COMPILER: ";
#if defined(APPLICATION_COMPILER_GNU_GCC)
    std::cout << "GNU GCC";
#elif defined(APPLICATION_COMPILER_MINGW_W64_GCC)
    std::cout << "MinGW-w64 GCC";
#elif defined(APPLICATION_COMPILER_MINGW32_GCC)
    std::cout << "MinGW32";
#elif defined(APPLICATION_COMPILER_LLVM_CLANG)
    std::cout << "LLVM Clang";
#elif defined(APPLICATION_COMPILER_CLANG_CL)
    std::cout << "Clang-cl";
#elif defined(APPLICATION_COMPILER_MSVC)
    std::cout << "MSVC";
#elif defined(APPLICATION_COMPILER_APPLE_CLANG)
    std::cout << "AppleClang";
#elif defined(APPLICATION_COMPILER_MINGW_W64_GCC)
    std::cout << "unknown";
#else
    std::cout << "unknown";
#endif
    std::cout << "\n";
}
