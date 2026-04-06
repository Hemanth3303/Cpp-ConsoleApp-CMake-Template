#include <iostream>

extern "C" void cversion();

void cppversion() {
	std::cout << "C++ version: " << __cplusplus << "\n";
}

int main(int argc, char** argv) {
	cversion();
	cppversion();

#if defined(APPLICATION_DEBUG_BUILD)
	std::cout << "Debug Build\n";
#elif defined(APPLICATION_PROFILE_BUILD)
	std::cout << "Profile Build\n";
#elif defined(APPLICATION_RELEASE_BUILD)
	std::cout << "Release Build\n";
#else

#endif

	std::cin.get();

	return 0;
}