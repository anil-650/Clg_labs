1. Write a program to find greatest among three no. using nested if...else statement.

```c++
// 1. Write a program to find greatest among three no. using nested if...else statement.

#include <iostream>

using namespace std;

int main(){
    int a=1, b=2, c=3;

    if(a > b && a > c){
        cout << a << " is greatest." << endl;
    } else if (b > c){
        cout << b << " is greatest." << endl;
    } else {
        cout << c << " is greatest." << endl;
    }

    return 0;

}
```

```
OUTPUT:
3 is greatest.
```

2. Write a program to find a no. is prime or not.

```c++
// 2. Write a program to find a no. is prime or not.

#include <iostream>

using namespace std;

int main(){
    int num, i, c=0;

    cout << "Give a number: " ;
    cin >> num;
    

    for(i = 1; i <= num; i++){
        if(num % i == 0){ 
            c++; 
        }
    }

    if(c == 2)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
    
}
```

```
OUTPUT:
Give a number: 97
97 is a prime number.
```

3. Write a program to find GCD and LCM of two numbers.

```c++
// 3. Write a program to find GCD and LCM of two numbers.

#include <iostream>

using namespace std;

int gcd(int x, int y){
    int a, b, r=0;

    a = (x > y)? x : y;
    b = (x < y)? x : y;

    r = b;

    while( a % b != 0){
        r = a % b;
        a = b;
        b = r;
    }

    return r;
}

int lcm(int x, int y){
    int a;

    a = (x > y)? x : y;

    while(true){
        if( a % x == 0 && a % y == 0)
            return a;

        ++a;
    }
}

int main(){
    int x, y;
    cout << "Enter 2 numbers: ";
    cin >> x >> y;
    cout << "GCD of 2 numbers: " << gcd(x, y) << endl;
    cout << "LCM of 2 numbers: " << lcm(x, y) << endl;

    return 0;
}
```

```
OUTPUT:
Enter 2 numbers: 8 5
GCD of 2 numbers: 1
LCM of 2 numbers: 40
```

4. Write a program to print the results for following series: 1! + 2! + 3! ...

```c++
// 4. Write a program to print the results for following series: 1! + 2! + 3! ...

#include <iostream>

using namespace std;

int main(){
    int n, i, sum=0, fact=1;

    cout << "Enter number for series: ";
    cin >> n;

    for(i = 1; i <= n; i++){
        fact = fact * i;
        sum = sum + fact;
    }

    cout << "Sum of series: " << sum endl;
    return 0;
}
```

```
OUTPUT:
Enter number for series: 3
Sum of series: 9
```

5. Write a program to print multiplication 1 to 10.

```c++
// 5. Write a program to print multiplication 1 to 10.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    clrscr();

    int i,j;

    cout << "Multiplication form 1 to 10:" << endl;
    for(i =1; i <= 10; i++)
        for(j = 1; j < i; j++)
            cout << i << "*" << j << "=" << i*j << endl;

    return 0;
}
```

```
OUTPUT:
1 * 1 = 1
1 * 2 = 2
.
.
.
1 * 9 = 9
1 * 10 = 10
2 * 1 = 2
2 * 2 = 4
.
.
.
2 * 9 = 18
2 * 10 = 20
3 * 1 = 3
3 * 2 = 6
.
.
.
3 * 9 = 27
3 * 10 = 30
4 * 1 = 4
4 * 2 = 8
.
.
.
4 * 9 = 36
4 * 10 = 40
5 * 1 = 5
5 * 2 = 10
.
.
.
5 * 9 = 45
5 * 10 = 50
6 * 1 = 6
6 * 2 = 12
.
.
.
6 * 9 = 54
6 * 10 = 60
7 * 1 = 7
7 * 2 = 14
.
.
.
7 * 9 = 63
7 * 10 = 70
8 * 1 = 8
8 * 2 = 16
.
.
.
8 * 9 = 72
8 * 10 = 80
9 * 1 = 9
9 * 2 = 18
.
.
.
9 * 9 = 81
9 * 10 = 90
10 * 1 = 10
10 * 2 = 20
.
.
.
10 * 9 = 90
10 * 10 = 100
```

6. Write a program for swapping two no. pass by address.

```c++
// 6. Write a program for swapping two no. pass by address.

#include <iostream>

using namespace std;

void swap(int a, int b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;

    cout << "After swapping num1 = " << a << "\nAfter swapping num2 = " << b << endl;
}

int main(){
    int n1,n2;
    cout << "Enter 2 numbers: ";
    cin >> n1 >> n2;

    cout << "Before swapping num1 = " << n1 << "\nBefore swapping num2 = " << n2 << endl;
    swap(n1, n2);

    return 0;
}
```

```
OUTPUT:
Enter 2 numbers: 3 4
Before swapping num1 = 3
Before swapping num2 = 4
After swapping num1 = 4
After swapping num2 = 3
```

7. Write a program to swapping two no. pass by reference.

```c++
// 7. Write a program to swapping two no. pass by reference.

#include <iostream>

using namespace std;

void swap( int *a,  int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;

    cout << "After swapping num1 = " << *a << "\nAfter swapping num2 = " << *b << endl;
}

int main(){
    int n1,n2;
    cout << "Enter 2 numbers: ";
    cin >> n1 >> n2;

    cout << "Before swapping num1 = " << n1 << "\nBefore swapping num2 = " << n2 << endl;
    swap(&n1, &n2);

    return 0;
}
```

```
OUTPUT:
Enter 2 numbers: 4 5
Before swapping num1 = 4
Before swapping num2 = 5
After swapping num1 = 5
After swapping num2 = 4
```

8. Write a program to find the sum of four numbers using default argument passing.

```c++
// 8. Write a program to find the sum of four numbers using default argument passing.

#include <iostream>

using namespace std;

int sum(int a, int b, int c=20, int d=40){
    return a+b+c+d;
}

int main(){
    cout << "Sum" << sum(5,10) << endl;
    cout << "Sum" << sum(5,10,15) << endl;
    cout << "Sum" << sum(5,10,15,30) << endl;

    return 0;
}
```

```
OUTPUT:
Sum75
Sum70
Sum60
```

9. Write a program to find square and cube of a number using inline function.

```c++
// 9. Write a program to find square and cube of a number using inline function.

#include <iostream>

using namespace std;

inline int square(int a){
    return a*a;
}

inline int cube(int a){
    return a*a*a;
}

int main(){
    int num;
    cout << "Enter a number: " ;
    cin >> num;

    cout << "Square of number: " << square(num) << endl;
    cout << "Cube of number: " << cube(num) << endl;

    return 0;
}
```

```
OUTPUT:
Enter a number: 5
Square of number: 25
Cube of number: 125
```

10. Write a program to find the factorial of a number.
11. Write a program to find reverse of a number.
12. Write a program for swapping of two numbers pass by value. 
13. Write a program to find sum of Four no. Using Default Argument in Member Function.
14. Write a program to area of circle, triangle, rectangle using function overloading.
15. Write a program to distinguish the properties of static & non-static data members.
16. Write a program to show the method of accessing the static private method function.
17. Write a program to show the ways calling constructors and destructors.
18. Write a program to perform using ++ operator overloading using member function.
19. Write a program to perform using ++ operator friend using member function.
20. Write a program to perform using + operator overloading for 2 complex number function.
21. Write a program to perform using + operator overloading for string concatenation.
22. Write a program to single inheritance.
23. Write a program to multiple inheritance.
