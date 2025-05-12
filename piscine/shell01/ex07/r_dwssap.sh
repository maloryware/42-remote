# okay so, display 'cat /etc/passwd' with the following wincons:
# 1 - remove comments ( "(?<!')#((?!!).*)" --- this guarantees #!bin/bash/ is excluded)
# 2 - every other line starting from the second ('sed -n "2~2p"')
# 3 - reverse each login ('rev')
# 4 - sort by reverse alphabetical order ('sort -r')
# 5 - keep only logins between FT_LINE1 and FT_LINE2, included (???? i have no fucking clue lol)
# 6 - separate by ', ' ('ls -m')
# 7 - end output with a '.' ()
# have fun moron lol

cat /etc/passwd | sed -E "s/\(\?\<\!\'\)\#\(\(\?\!\!\)\.\*\)//g" | sed -n '2~2p' | sed 's/\:.*//g' | rev | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | tr '\n' ',' | sed 's/,/\, /g' | sed 's/\, $/./g' 