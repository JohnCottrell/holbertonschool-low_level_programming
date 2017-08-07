#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c -fpic *.c
gcc -Wall -Werror -Wextra -pedantic -shared -o liball.so *.o
