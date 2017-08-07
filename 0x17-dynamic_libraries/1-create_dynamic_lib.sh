#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c -fPIC *.c
gcc -Wall -Werror -Wextra -pedantic -shared -o liball.so *.o
