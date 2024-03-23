//
// Created by Mauricio on 23/03/24.
//

#ifndef PERSPICUOUS_OS_TYPE_H
#define PERSPICUOUS_OS_TYPE_H

typedef enum {
    OS_UNKNOWN,
    OS_WINDOWS,
    OS_LINUX,
    OS_MACOS,
    // Add other OS types as needed
} OSType;

extern OSType currentOS;

void detectOSType();

#endif //PERSPICUOUS_OS_TYPE_H
