#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -fPIC *.c
gcc -Wall -Werror -Wextra -pedantic -shared -o liball.so *.o
