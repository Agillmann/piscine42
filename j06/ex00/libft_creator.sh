#!/bin/sh

ls | gcc -c *.c && ls | ar rc libstr.a *.o && ranlib libstr.a && ls | rm *.o 
