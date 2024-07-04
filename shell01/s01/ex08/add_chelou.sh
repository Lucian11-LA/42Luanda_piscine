echo "ibase=5; obase=D; $(echo $FT_NBR1 | tr "\'" "0" | tr '\\\"\?\!' '1234')" \
| bc \
| tr '0123456789ABC' 'gtaio luSnemf' \
| tr -d '\\n' \
; echo \
| echo "ibase=5; obase=D; $(echo $FT_NBR2 | tr 'mrdoc' '01234')" \
| bc \
| tr '0123456789ABC' 'gtaio luSnemf' \
| tr -d '\\n' ;
echo

