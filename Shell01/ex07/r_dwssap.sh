cat /etc/passwd | grep -v '^#' | sed -n '2~2p' | cut -d: -f1 | sort -r | awk -v line1=FT_LINE1 -v line2=FT_LINE2 'NR >= line1 && NR <= line2 {
