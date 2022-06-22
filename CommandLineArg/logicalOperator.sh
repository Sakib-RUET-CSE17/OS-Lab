echo "Argument1 = $1:"
if [ $1 -lt 0 ]
then
    echo "negative"
elif [ $1 -eq 0 ]
then
    echo "non-negative"
else echo "positive"
fi

echo "Argument2 = $2:"
if [ $2 -lt 0 ]
then
    echo "negative"
elif [ $2 -eq 0 ]
then
    echo "non-negative"
else echo "positive"
fi