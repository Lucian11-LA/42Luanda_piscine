#!/bin/bash
cat /etc/passwd \
| grep -v '^#' \
| sed -n '2~2p' \
| cut -d ':' -f 1 \
| rev \
| sort -r \
| awk -v FT_LINE1=7 -v FT_LINE2=15 'NR>=FT_LINE1 && NR<=FT_LINE2' \
| awk 'ORS=", "' \
| sed 's/, $/./' \
| tr -d '\n'

