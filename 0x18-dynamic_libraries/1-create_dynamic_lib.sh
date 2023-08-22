#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra *.c -c -fpic
gcc -shared -o liball.so *.o
