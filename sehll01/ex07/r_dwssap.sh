cat /etc/passwd | grep -v -e "#" | awk "NR % 2 == 0" | cut -d ":" -f1 | rev | sort -rn | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | sed "s/$/,/" | tr "\n" " " | sed "s/, *$/\./" | tr -d "\n"
