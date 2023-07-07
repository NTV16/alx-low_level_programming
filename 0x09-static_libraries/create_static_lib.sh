#!/bin/bash
ar -rc liball.a *.o
ranlib liball.a
gcc -c *.c -L -liball.a -o *.o
