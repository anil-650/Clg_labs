# Question

## [Answers](./Ans_DS.md)

1. Write a program that prints “Hello World” to the screen.

```python
print(“Hello World”
```

O/P:-
```
Hello World
```

2. Write  a program that asks the user for a number n and prints the sum of the numbers 1 to n

```python
num = int(input( "enter a integer: " ))
sum_num = 0

for i in range(1, num+1): 
sum_num += i
print(sum_num)
```

O/P:-

```
enter a integer: 5
1
3
6
10
15
21
28
```

3. Write a program that prints a multiplication table for numbers up to 12

```python
for i in range(1,13):
    print("\n\nMULTIPLICATION TABLE FOR %d\n" %(i))
    for j in range(1,11):
        print("%-5d X %5d = %5d" % (i, j, i*j))

```

O/P:-

```

MULTIPLICATION TABLE FOR 1

1     X     1 =     1
1     X     2 =     2
1     X     3 =     3
1     X     4 =     4
1     X     5 =     5
1     X     6 =     6
1     X     7 =     7
1     X     8 =     8
1     X     9 =     9
1     X    10 =    10


MULTIPLICATION TABLE FOR 2

2     X     1 =     2
2     X     2 =     4
2     X     3 =     6
2     X     4 =     8
2     X     5 =    10
2     X     6 =    12
2     X     7 =    14
2     X     8 =    16
2     X     9 =    18
2     X    10 =    20


MULTIPLICATION TABLE FOR 3

3     X     1 =     3
3     X     2 =     6
3     X     3 =     9
3     X     4 =    12
3     X     5 =    15
3     X     6 =    18
3     X     7 =    21
3     X     8 =    24
3     X     9 =    27
3     X    10 =    30


MULTIPLICATION TABLE FOR 4

4     X     1 =     4
4     X     2 =     8
4     X     3 =    12
4     X     4 =    16
4     X     5 =    20
4     X     6 =    24
4     X     7 =    28
4     X     8 =    32
4     X     9 =    36
4     X    10 =    40


MULTIPLICATION TABLE FOR 5

5     X     1 =     5
5     X     2 =    10
5     X     3 =    15
5     X     4 =    20
5     X     5 =    25
5     X     6 =    30
5     X     7 =    35
5     X     8 =    40
5     X     9 =    45
5     X    10 =    50


MULTIPLICATION TABLE FOR 6

6     X     1 =     6
6     X     2 =    12
6     X     3 =    18
6     X     4 =    24
6     X     5 =    30
6     X     6 =    36
6     X     7 =    42
6     X     8 =    48
6     X     9 =    54
6     X    10 =    60


MULTIPLICATION TABLE FOR 7

7     X     1 =     7
7     X     2 =    14
7     X     3 =    21
7     X     4 =    28
7     X     5 =    35
7     X     6 =    42
7     X     7 =    49
7     X     8 =    56
7     X     9 =    63
7     X    10 =    70


MULTIPLICATION TABLE FOR 8

8     X     1 =     8
8     X     2 =    16
8     X     3 =    24
8     X     4 =    32
8     X     5 =    40
8     X     6 =    48
8     X     7 =    56
8     X     8 =    64
8     X     9 =    72
8     X    10 =    80


MULTIPLICATION TABLE FOR 9

9     X     1 =     9
9     X     2 =    18
9     X     3 =    27
9     X     4 =    36
9     X     5 =    45
9     X     6 =    54
9     X     7 =    63
9     X     8 =    72
9     X     9 =    81
9     X    10 =    90


MULTIPLICATION TABLE FOR 10

10    X     1 =    10
10    X     2 =    20
10    X     3 =    30
10    X     4 =    40
10    X     5 =    50
10    X     6 =    60
10    X     7 =    70
10    X     8 =    80
10    X     9 =    90
10    X    10 =   100


MULTIPLICATION TABLE FOR 11

11    X     1 =    11
11    X     2 =    22
11    X     3 =    33
11    X     4 =    44
11    X     5 =    55
11    X     6 =    66
11    X     7 =    77
11    X     8 =    88
11    X     9 =    99
11    X    10 =   110


MULTIPLICATION TABLE FOR 12

12    X     1 =    12
12    X     2 =    24
12    X     3 =    36
12    X     4 =    48
12    X     5 =    60
12    X     6 =    72
12    X     7 =    84
12    X     8 =    96
12    X     9 =   108
12    X    10 =   120
```

4. Write a function that returns the largest element in a list

```python
def maximumElement(list):
    largest = list[0]
    for i in range(len(list)): 
        if largest<list[i]: 
            largest=list[i]
    return largest 

list = [12,123,43,5,12,76,98,3,43,2]
print(maximumElement(list))

```

O/P:-
```
123
```


5. Write a function that  computes the running total of a list

```python
def sum_of_list(l):
    total = 0
    for val in l:
    total = total + val
    return total

l = [1,3,5,2,4]
print "The sum of my_list is", sum_of_list(l)

```

O/P:-
```
The sum of my_list is 15
```

6. Write a function that tests whether a string is a palindrome.

```python
# function to check string is
# palindrome or not
def isPalindrome(str):

# Run loop from 0 to len/2
    for i in range(0, int(len(str)/2)):
        if str[i] != str[len(str)-i-1]:
        return False
        return True

# main function
    s = "malayalam"
ans = isPalindrome(s)

    if (ans):
        print("Yes")
        else:
        print("No")
        O/P:-
        Yes
        Press any key to continue . . .
        7. Implement linear search
        def linear_Search(list1, n, key):

# Searching list1 sequentially  
            for i in range(0, n):  
                if (list1[i] == key):  
                    return i  
                    return -1  


                    list1 = [1 ,3, 5, 4, 7, 9]  
                    key = 7  

    n = len(list1)  
res = linear_Search(list1, n, key)  
    if(res == -1):  
        print("Element not found")  
        else:  
        print("Element found at index: ", res)  
        O/P:
            ('Element found at index: ', 4)
              Press any key to continue . . .
              8. Implement binary search

# Iterative Binary Search Function method Python Implementation  
# It returns index of n in given list1 if present,   
# else returns -1   
              def binary_search(list1, n):  
                  low = 0  
                  high = len(list1) - 1  
                  mid = 0  

                  while low <= high:  
# for get integer result   
mid = (high + low) // 2  

# Check if n is present at mid   
    if list1[mid] < n:  
    low = mid + 1  

# If n is greater, compare to the right of mid   
    elif list1[mid] > n:  
    high = mid - 1  

# If n is smaller, compared to the left of mid  
    else:  
    return mid  

# element was not present in the list, return -1  
    return -1  


# Initial list1  
    list1 = [12, 24, 32, 39, 45, 50, 54]  
    n = 45  

# Function call   
result = binary_search(list1, n)  

    if result != -1:  
    print("Element is present at index", str(result))  
    else:  
    print("Element is not present in list1")  
    O/P:-
    ('Element is present at index', '4')
    Press any key to continue . . .
    9. Implement of matrices addition
# Program to add two matrices using nested loop

    X = [[12,7,3],
    [4 ,5,6],
    [7 ,8,9]]

    Y = [[5,8,1],
    [6,7,3],
    [4,5,9]]

    result = [[0,0,0],
    [0,0,0],
    [0,0,0]]

# iterate through rows
    for i in range(len(X)):
# iterate through columns
        for j in range(len(X[0])):
            result[i][j] = X[i][j] + Y[i][j]

            for r in result:
print(r)
    O/P:-
    [17, 15, 4]
    [10, 12, 9]
    [11, 13, 18]
    Press any key to continue . . .
    b) Implement matrices subtraction

    matrix1 = [[10, 11, 12],
    [13, 14, 15],
    [16, 17, 18]]
    matrix2 = [[1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]]
    rmatrix = [[0, 0, 0],
    [0, 0, 0],
    [0, 0, 0]]

    for i in range(len(matrix1)):
        for j in range(len(matrix1[0])):
            rmatrix[i][j] = matrix1[i][j] - matrix2[i][j]

            for r in rmatrix:
print(r)
    O/P:-
    [9, 9, 9]
    [9, 9, 9]
    [9, 9, 9]
    Press any key to continue . . .
    c) Implement matrices multiplication

# Program to multiply two matrices using nested loops

# 3x3 matrix
    X = [[12,7,3],
    [4 ,5,6],
    [7 ,8,9]]
# 3x4 matrix
    Y = [[5,8,1,2],
    [6,7,3,0],
    [4,5,9,1]]
# result is 3x4
    result = [[0,0,0,0],
    [0,0,0,0],
    [0,0,0,0]]

# iterate through rows of X
    for i in range(len(X)):
# iterate through columns of Y
        for j in range(len(Y[0])):
# iterate through rows of Y
            for k in range(len(Y)):
                result[i][j] += X[i][k] * Y[k][j]

                for r in result:
print(r)
    O/P:-
    [114, 160, 60, 27]
    [74, 97, 73, 14]
    [119, 157, 112, 23]
    Press any key to continue . . .

