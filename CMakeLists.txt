cmake_minimum_required(VERSION 3.27)
project(perspicuous C)

set(CMAKE_C_STANDARD 23)

add_executable(perspicuous src/main.c
        src/dbms.c
        include/dbms.h
        src/storage.c
        include/storage.h
        src/query_parser.c
        include/query_parser.h
        src/transaction.c
        include/transaction.h
        "src/util.c .c"
        "include/util.c .h"
        include/os_type.h
        src/os_type.c)
