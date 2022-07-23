#!/bin/bash

#compile

gcc -c *.c

#create library

ar -rc lliball.a *.o
