#!/bin/sh
cat /etc/passwd | grep -v '^#' | awk 'NR %2 == 0' | cut -d : -f 1 | rev | sort -r | awk -v i=$FT_LINE1 -v j=$FT_LINE2 'NR >= i && NR <= 15' | xargs | sed 's/_/_,/g' | sed 's/,$/./g' | tr -d '\n'
