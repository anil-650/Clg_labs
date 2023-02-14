## 1. Write a Shell script to check if the number entered at the command line is prime or not.

```bash
#!/bin/bash
echo  "Enter Number : "
read n
for((i=2; i<=$n/2; i++))
do
ans=$(( n%i ))
if  [ $ans -eq 0 ]
then
echo "$n is not a prime number."
exit 0
fi
done
echo "$n is a prime number."
```

```
O/P:-
Enter Number :
4
4 is not a prime number.
```

## 2. Write a shell script modify cal command to display calendar of the specified month.

```bash
#!/bin/bash
month=$1
year=$2
cal $month $year
```

```
O/P:-
$ sh calender.sh 3 2018
     March 2018
Su Mo Tu We Th Fr Sa
             1  2  3
 4  5  6  7  8  9 10
11 12 13 14 15 16 17
18 19 20 21 22 23 24
25 26 27 28 29 30 31
```

## 3. Write a shell script to accept a login name. If not a valid login name display message "Entered login name is invalid"

```bash
#!/bin/bash
echo "Enter username"
read name
username='anshulkansal'
if [ $name = $username ]
then
echo "Valid"
else
echo "Entered login name is invalid"
fi
```

```
O/P:-
Enter username
ubuntu
Entered login name is invalid
```

## 4. Write a shell script to display date in the mm/dd/yy format.

```sh
#!/bin/bash
d=`date +%m-%d-%Y`
echo "Date in format MM-DD-YYYY"
echo $d
```

```
O/P:-
Date in format MM-DD-YYYY
01-20-2023
```


## 5. Write a shell script display on the screen sorted output of who command along with the total number of users.

```bash
#!/bin/bash
#here we are you going to develop a script for various options on user accounts
echo  “
[ 1 ] for listing all the user accounts name \n
[ 2 ] for counting the number of logged-in user accounts  \n
[ 3 ] for listing the names of currently logged-in users\n
[ 4 ] for checking the groups to which the current user belong \n"
"

#Now take user input
read userInput

#Now we will use switch cases for various input operations
case $userInput in
    1)
    #syntax lslogins <option[=output field]>
    ls logins -o USER
    ;;
    2)
    #syntax who <option> <user optional>
    #grep used to filter
    who --count | grep users
    ;;
    3)
    #-q option is to count the number of users and print the logged-in users.
    # instead of -q, --count can also be used.
    # -v is used to exclude any pattern
    who -q | grep -v users
    ;;
    4)
    #syntax groups <option> [USERNAME]
    groups
    ;;
    *)
    echo -e "Please Enter Correct Input \n"
    ;;
Esac
```


```
O/P:-

[ 1 ] for listing all the user accounts name \n
[ 2 ] for counting the number of logged-in user accounts  \n
[ 3 ] for listing the names of currently logged-in users\n
[ 4 ] for checking the groups to which the current user belong \n
3
mca

```

## 6. Write a shell script to display the multiplication table of any number.

```bash
#!/bin/bash
# Looping i, i should be less than
# or equal to 10
echo “enter  a number”
read n
i=1
while [ $i -le 10 ]
do
res=$((i * n))

# printing on console
echo "$n * $i = $res"

# incrementing i by one
((++i))

# end of while loop
done
```

```
O/P:-
enter a number
4
4 * 1 = 4
4 * 2 = 8
4 * 3 = 12
4 * 4 = 16
4 * 5 = 20
4 * 6 = 24
4 * 7 = 28
4 * 8 = 32
4 * 9 = 36
4 * 10 = 40
```

## 7. Write a shell script to find the sum of digits of a given number.

```bash
#!/bin/bash
read -rp -p "Enter 2 numbers seprated by space: " a b
sum=$((a + b))
echo "sum is $sum"
```

```
O/P:-
Enter 2 numbers seprated by space: 7 8
sum is 15
```

## 8. Write a shell script to compare two files and if found equal ask the user to delete the duplicate file.

```bash
#!/bin/bash
read -r -p "Enter 1st file: " f1
read -r -p "Enter 2nd file: " f2

res=$(cmp -s $f1 $f2)

if [ $res -eq 0 ]
then
    echo "$f1 and $f2 are the same delete duplicate y/n"
    read replay

    if [ "$replay" = "y" ]
    then
        rm $f2 && echo "done"
        exit 0
    fi
else
    echo "$f1 and $f2 are diffrent."
fi
```

```
O/P:-
Enter 1st file: file1.txt
Enter 2nd file: file2.txt
file1.txt and file2.txt are the same. delete duplicate y/n ?
y
done
```

## 9. Write a shell script to merge the contents of three files, sort the contents and then display them page by page.


```bash
#!/bin/bash
# first we will create 3 files with seq commd
seq 1 2 5 >> f1 # inner contents 1 3 5
seq 2 2 6 >> f2 # inner contents 2 4 6
seq 3 3 9 >> f3 # inner contents 3 6 9

# combine files and sorting contents.
cat f1 f2 f3 | sort | pr
```


```
O/P:-
2023-02-09 19:20                                                  Page 1

1
2
3
3
4
5
6
6
9
```

## 10. Write a shell script to find the LCD(Least common divisor) of the numbers

```bash
#!/bin/bash
read -r -p "Enter the first number :" a
read -r -p "Enter the second number : " b
if [ $a -gt $b ]
then
num=$a
den=$b
else
num=$b
den=$a
fi

r=$((num%den))

while [ $r -ne 0 ]
do
num=$den
den=$r
r=$((num/den))
done

#gcd=$den
#lcm=`expr $a \* $b / $gcd`
lcm=$((a*b/den))

echo " The LCM of $a and $b is : $lcm"
#echo " The GCD of $a and $b is : $gcd"
```

```
O/P:-
Enter the first number : 56
Enter the second number : 24
The LCM of 56 and 24 is : 168
```


## 11. Write a shell script to find the greatest number among the three numbers.

```bash
#!/bin/bash
#shell script to find the greatest of three numbers

read -r -p "Enter Num1" num1
read -r -p "Enter Num2" num2
read -r -p "Enter Num3" num3

if [ $num1 -gt $num2 ] && [ $num1 -gt $num3 ]
then
    echo $num1
elif [ $num2 -gt $num1 ] && [ $num2 -gt $num3 ]
then
    echo $num2
else
    echo $num3
fi

Note:-read function used to get the input from the user.
-gt stands for greater than.
&& represents the logical AND condition.
```

```
Output
Enter Num1 1
Enter Num2 34
Enter Num3 2
34
```

## 12. Write  a shell script to find power  of given number.

```bash
#!/bin/bash
a=5
b=6
echo "$((a ** b))"
```

```
O/P:-
15625
```

## 13. Write  a shell script to find power  of given number using loop.

```bash
#!/bin/bash
read -r -p "Enter number : " n
read -r -p "Enter Power of Number:- " p

tmp=$p
power=1

while [ $p -gt 0 ]
  do
    power=$((power * n))
    p=$((p - 1))
done

echo "$n power $tmp is $power"
```

```
O/P:-
Enter number : 3
Enter Power of Number:- 4
3 power 4 is 81
```

## 14. Write a shell script to find factorial of given number.

```bash
#!/bin/bash
#shell script for factorial of a number
#factorial using while loop

read -r -p "Enter a number: " num
fact=1

while [ $num -gt 1 ]
do
  fact=$((fact * num))  #fact = fact * num
  num=$((num - 1))      #num = num - 1
done

echo $fact

```

Note:--gt stands for greater than (>).


```
O/P:-
Enter a number: 3
6
```

## 15. Write a shell script to check whether the number is Armstrong or not

```bash
#!/bin/bash
read -r -p "Enter a number: " c
x=$c
sum=0
r=0
n=0

while [ $x -gt 0 ]
do
r=$((x % 10))
n=$((r * r * r))
sum=$((sum + n))
x=$((x / 10))
done

if [ $sum -eq $c ]
then
echo "It is an Armstrong Number."
else
echo "It is not an Armstrong Number."
fi
```

```
O/P:-
Enter a number: 153
It is an Armstrong Number.
```
