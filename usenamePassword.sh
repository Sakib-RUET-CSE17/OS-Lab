# echo Enter a:
read -p "Enter username: " username
# echo Enter b:
read -sp "Enter password: " password
echo
if [ $username == "abc" ]
then
    if [ $password == 12345 ]
    then echo "Successfull"
    fi
else
    echo "Wrong user"
fi
# echo $username $password