#!/bin/bash
gcc -Wall -Werror -pedantic -c *.c
ar rc liballa.a *.o
