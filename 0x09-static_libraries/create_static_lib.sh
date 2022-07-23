#!/bin/bash

#compile

gcc -c *.c

#create library

ar -rc liball.a *.o
