#include <iostream>

extern "C" void cversion();

void cppversion() {
    std::cout << "C++ version: " << __cplusplus << "\n";
}

int main(int argc, char **argv) {
    cversion();
    cppversion();

#if defined(APPLICATION_DEBUG_BUILD)
    std::cout << "APPLICATION: Debug Build\n";
#elif defined(APPLICATION_PROFILE_BUILD)
    std::cout << "APPLICATION: Profile Build\n";
#elif defined(APPLICATION_RELEASE_BUILD)
    std::cout << "APPLICATION: Release Build\n";
#else
    std::cout << "APPLICATION: Unknown Build\n";
#endif

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

    std::cout << "Press Enter Key To Exit...";
    std::cin.get();

    return 0;
}
