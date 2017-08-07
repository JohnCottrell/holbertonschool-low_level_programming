#!/bin/bash
gcc -c -fpic *.c -shared -o liball.so *.o
