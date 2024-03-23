//
// Created by Mauricio on 23/03/24.
//

#include "config.h"
#include "os_type.h"
#include <string.h>

char dataDirectory[PATH_MAX];

void initializeDataDirectory() {
    switch (currentOS) {
        case OS_WINDOWS:
            strcpy(dataDirectory, "C:\\ProgramData\\perspicuous\\data");
            break;
        case OS_LINUX:
            strcpy(dataDirectory, "/var/lib/perspicuous/data");
            break;
        case OS_MACOS:
            strcpy(dataDirectory, "/var/lib/perspicuous/data");
            break;
        case OS_UNKNOWN:
        default:
            strcpy(dataDirectory, "./data"); // Default to current directory
            break;
    }
}
