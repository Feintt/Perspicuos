// Detect the current OS type

#include "../include/os_type.h"

// Initialize currentOS with the default value
OSType currentOS = OS_UNKNOWN;

void detectOSType() {
#if defined(_WIN32) || defined(_WIN64)
    currentOS = OS_WINDOWS;
#elif defined(__linux__)
    currentOS = OS_LINUX;
#elif defined(__APPLE__) && defined(__MACH__)
    currentOS = OS_MACOS;
#else
    currentOS = OS_UNKNOWN;
#endif
}
