#!/bin/bash
# Реализовать компаратор для сравнения содержимого двух текстовых файлов, располагающегося после первого
# вхождения подстроки «Result:␣».

file1="$1"
file2="$2"
cat "$file1" > "out1.txt"
cat "$file2" > "out2.txt"

sed '1,/Result: / d' < "$file1" > "out3_1.txt"
cat "out3_1.txt" > "out3.txt"
comm -13 <(sort -u "out3.txt") <(sort -u "out1.txt") > "out4.txt"
< "out4.txt"  tail -n1 > "out3.txt"
< "out3.txt" grep -E -o "Result:.*" > "temp"
cat "out3_1.txt" >> "temp"
cat "temp" > "out1.txt"
rm "temp" "out3.txt" "out4.txt" "out3_1.txt"

sed '1,/Result: / d' < "$file2" > "out3_1.txt"
cat "out3_1.txt" > "out3.txt"
comm -13 <(sort -u "out3.txt") <(sort -u "out2.txt") > "out4.txt"
< "out4.txt"  tail -n1 > "out3.txt"
< "out3.txt" grep -E -o "Result:.*" > "temp"
cat "out3_1.txt" >> "temp"
cat "temp" > "out2.txt"
rm "temp" "out3.txt" "out4.txt" "out3_1.txt"

if cmp -s "out1.txt" "out2.txt" ; then
    echo Содержимое файлов одинаково
else echo Содержимое файлов не одинаково
fi
rm "out1.txt" "out2.txt"
