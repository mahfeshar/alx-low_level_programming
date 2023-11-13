#!/bin/bash
gcc -c -fpic *.c
gcc -shared -p liball.so *.o
