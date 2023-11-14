#!/bin/bash
gcc -c -fpic *.c
gcc -shared liball.so *.o
