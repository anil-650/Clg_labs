1. Write a program to find greatest among three no. using nested if...else statement.

```
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

```
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

```
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
5. Write a program to print multiplication 1 to 10.
6. Write a program for swapping two no. pass by address.
7. Write a program to swapping two no. pass by reference.
8. Write a program to find the sum of four numbers using default argument passing.
9. Write a program to find square and cube of a number using inline function.
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
