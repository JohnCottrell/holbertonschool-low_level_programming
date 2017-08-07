#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC *.c
gcc -shared -o liball.so *.o
