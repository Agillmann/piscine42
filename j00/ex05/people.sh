#!/bin/sh

ldapsearch -xLLL cn | grep -A 1 'uid=z' | grep 'cn' | cut -d: -f 2 | cut -c 2- | sort -rf 
