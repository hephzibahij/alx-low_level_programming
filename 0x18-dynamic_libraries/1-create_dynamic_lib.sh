#!/bin/bash
gcc -Wall -fPIC *.c
gcc -shared  -o liball.so *.o
