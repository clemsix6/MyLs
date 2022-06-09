cmake_minimum_required(VERSION 3.20)
project(MyLs C)

file(GLOB SRC
        "*.c"
        )
file(GLOB MY
        "lib/my/*.c"
        )

set(CMAKE_C_STANDARD 99)

include_directories("include")
add_executable(MyLs ${SRC} ${MY} lib/my/my_strcat_in.c my_ls.c include/my_ls.h)
