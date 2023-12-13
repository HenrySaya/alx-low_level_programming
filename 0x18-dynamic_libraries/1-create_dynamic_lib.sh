#!/bin/bash
gcc *.c -c -Wall -Wextra -Werror -pedantic -fpic
gcc *.o -shared -o liball.so
gcc -o -L. liball.so
sudo cp liball.so /usr/bin
