#!/bin/bash
gcc -Wall -Werror -pedantic -c *.c
ar -rsc liball.a *.o
