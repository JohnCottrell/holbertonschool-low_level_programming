#!/bin/bash
gcc -c -Wall -Werror -pedantic -Wextra -fPIC *.c
gcc -shared -o liball.so *.o
