#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
export LD_LYBRARY_PATH=.:$LD_LYBRARY_PATH
