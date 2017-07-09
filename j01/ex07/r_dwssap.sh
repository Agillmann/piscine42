#!/bin/sh
cat /etc/passwd | grep -v '^\#' | sed -n 'n;p' | rev | cut -d: -f7 | sort -r
