read -p "Enter n: " n
echo "Enter $n numbers: "
for ((i=0; i<$n; i++))
do
    read arr[$i]
    # echo ${arr[$i]}
done

for ((i=0; i<$n; i++))
do
    for ((j=$i; j<$n; j++))
    do
        if [ ${arr[$i]} -gt ${arr[$j]} ]
        then
            temp=${arr[$i]}
            # echo "temp $temp"
            # echo "arr[$i] = ${arr[$i]}"
            # (( )) dile $ lage na 
            ((arr[i] = arr[j]))
            # echo ${arr[$i]}
            ((arr[j] = temp))
        fi
    done
done

# for ((i=0; i<$n; i++))
# do
# echo -n "${arr[$i]} "
# done
echo ${arr[*]}

