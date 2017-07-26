#!/bin/sh

ls | gcc -c *.c && ls | ar rc libft.a *.o && ranlib libft.a && ls | rm *.o 
