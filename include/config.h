//
// Created by Mauricio on 23/03/24.
//

#ifndef PERSPICUOUS_CONFIG_H
#define PERSPICUOUS_CONFIG_H

#include <limits.h> // For PATH_MAX

extern char dataDirectory[PATH_MAX];

void initializeDataDirectory();

#endif //PERSPICUOUS_CONFIG_H
