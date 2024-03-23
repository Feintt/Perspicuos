// Entrypoint for DBMS

#include "os_type.h"
#include "config.h"

int main() {
    detectOSType();
    initializeDataDirectory();

    return 0;
}
