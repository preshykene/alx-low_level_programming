#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o libdynamic.so liball.so *.o
