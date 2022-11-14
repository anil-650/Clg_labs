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

```c++
// 10. Write a program to find the factorial of a number.

#include <iostream>

using namespace std;

int main(){
    int n, fact = 1, i;
    cout << "Enter a number: " ;
    cin >> n;

    if(n == 0){
        fact = 1;
    } else {
        for(i = n; i >= 1; i--){
            fact = fact*i;
        }
    }

    cout << "Factorial: " << fact << endl;

    return 0;
}

```

```
OUTPUT:
Enter a number: 5
Factorial: 120
```

11. Write a program to find reverse of a number.

```c++
// 11. Write a program to find reverse of a number.

#include <iostream>

using namespace std;

int main(){
    int n, rev = 0, r;
    cout << "Enter a number: " ;
    cin >> n;

    while(n > 0){
        r = n%10;
        rev = rev*10+r;
        n = n/10;
    }

    cout << "Reverse: " << rev << endl;

    return 0;
}

```

```
OUTPUT:
Enter a number: 456
Reverse: 654
```

12. Write a program for swapping of two numbers pass by value. 

```c++
// 12. Write a program for swapping of two numbers pass by value. 

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

13. Write a program to find sum of Four no. Using Default Argument in Member Function.

```c++
// 13. Write a program to find sum of Four no. Using Default Argument in Member Function.

#include <iostream>

using namespace std;

class add{
    public:
        int sum(int p, int q, int r = 20, int s = 10)
        {
            return (p + q + r + s);
        }
}

int main(){
    add d;
    cout << d.sum(5,30) << endl;
    cout << d.sum(5,30,40) << endl;
    cout << d.sum(5,30,40,50) << endl;

    return 0;
}

```

```
OUTPUT:
65
85
125
```

14. Write a program to area of circle, triangle, rectangle using function overloading.

```c++
// 14. Write a program to area of circle, triangle, rectangle using function overloading.

#include <iostream>

using namespace std;

void area(double r){
    cout << "Area of Circle: " << 3.14*r*r << endl;
}

void area(double b, double h){
    cout << "Area of Triangle: " << 0.5*b*h << endl;
}

void area(int l, int b){
    cout << "Area of Circle: " << l*b << endl;
}

int main(){
    area(5.3);
    area(3,6);
    area(5,6);

    return 0;
}
```

```
OUTPUT:
Area of Circle: 88.2026
Area of Circle: 18
Area of Circle: 30
```

15. Write a program to distinguish the properties of static & non-static data members.

```c++
// 15. Write a program to distinguish the properties of static & non-static data members.

#include <iostream>

using namespace std;

class item{
    static int count;
    int number;

    public:
    void getdata(int a){
        number = a;
        count++;
    }
    void getcount(){
        cout << "count: " << count << endl;
    }

};

int item::count;

int main(){
    item a,b,c;

    a.getcount();
    b.getcount();
    c.getcount();
    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    a.getcount();
    b.getcount();
    c.getcount();

    return 0;
}
```

```
OUTPUT:
count: 0
count: 0
count: 0
count: 3
count: 3
count: 3
```

16. Write a program to show the method of accessing the static private method function.

```c++
// 16. Write a program to show the method of accessing the static private method function.

#include <iostream>

using namespace std;

class test{
    static int count;
    static void display(){
        count++;
        cout << "count: " << count << endl;
    }

    public:
    static void showcount(){
        display();
    }
};

int test::count;

int main(){
    test t1;
    t1.showcount();

    return 0;
}

```

```
OUTPUT:
count: 1
```

17. Write a program to show the ways calling constructors and destructors.

```c++
// 17. Write a program to show the ways calling constructors and destructors.

#include <iostream>

using namespace std;

class B{
    public:
        B(){
            cout << "Constructor is called\n";
        }

        ~B(){
            cout << "Destructor is called\n";
        }

        void show(){
            cout << "Hello World" << endl;
        }
};

int main(){
    B cd;
    cd.show();

    return 0;
}
```

```
OUTPUT:
Constructor is called
Hello World
Destructor is called
```

18. Write a program to perform using ++ operator overloading using member function.

```c++
// 18. Write a program to perform using ++ operator overloading using member function.

#include <iostream>

using namespace std;

class A{
    int a;
    public:
    A(){
        a = 0;
    }

    void operator++(){
        a++;
    }

    void display(){
        cout << a << endl;
    }
};

int main(){
    A ob;
    ++ob;
    ob.display();
    ob.operator++();
    ob.display();

    return 0;
}
```

```
OUTPUT:
1
2
```

19. Write a program to perform using ++ operator friend using member function.

```c++
// 19. Write a program to perform using ++ operator friend using member function.

#include <iostream>

using namespace std;

class A{
    int a;
    public:
    A(){
        a = 0;
    }

    void display(){
        cout << a << endl;
    }

    friend void operator++(A &op1);
    friend void operator++(A &op2,int);
};

void operator++(A &op1){
    op1.a++;
}

void operator++(A &op2,int){
    op2.a++;
}


int main(){
    A ob;
    ++ob;
    ob.display();
    ob++();
    ob.display();

    return 0;
}
```

```
OUTPUT:
1
2
```

20. Write a program to perform using + operator overloading for 2 complex number function.

```c++
// 20. Write a program to perform using + operator overloading for 2 complex number function.

#include <iostream>

using namespace std;

class complex{
    int x,y;
    public:
    void getdata(int real, int imag){
    x = real;
    y = imag;
    }

    complex operator+(complex c){
        complex temp;
        temp.x = x+c.x;
        temp.y = y+c.y;
        return temp;
    }

    void display(){
        cout << "Addition result = " << x << "+i" << y << endl;
    }

};

int main(){
    complex c1, c2, c3;
    c1.getdata(2, 3);
    c2.getdata(3, 3);
    c3 = c1+c2;
    c3.display();

    return 0;
}
```

```
OUTPUT:
Addition result = 5+i6
```

21. Write a program to perform using + operator overloading for string concatenation.

```c++
// 21. Write a program to perform using + operator overloading for string concatenation.

#include <iostream>
#include <string.h>

using namespace std;

class String{
    public:
        char str[20];

        void input(){
            cout << "Enter a string: ";
            cin >> str;
        }

        void display(){
            cout << str;
        }


        String operator+(String x){
            String s;
            strcat(str, " ");
            strcat(str, x.str);
            strcpy(s.str, str);
            return s;
        }
};

int main(){
    String str1, str2, str3;
    str1.input();
    str2.input();
    
    str1.display();
    str2.display();

    str3 = str1+str2;

    str3.display();

    return 0;
}
```

```
OUTPUT:
Enter a string: Nihar
Enter a string: Hansda
Nihar Hansda
```

22. Write a program to single inheritance.

```c++
// 22. Write a program to single inheritance.

#include <iostream>

using namespace std;

class A{
    int a,b;
    public:
    void input(){
        cout << "Enter value for a & b: ";
        cin >> a >> b;
    }

    void show(){
        cout << "a = " << a << "\tb = " << b << endl;
    }
};

class B:public A{
    int c,d;
    public:
    void getdata(){
        cout << "Enter value for c & d: ";
        cin >> c >> d;
    }

    void display(){
        cout << "c = " << c << "\td = " << d << endl;
    }
};

int main(){
    B ob;
    ob.input();
    ob.show();
    ob.getdata();
    ob.display();

    return 0;
}
```

```
OUTPUT:
Enter value for a & b: 3 4
a = 3   b = 4
Enter value for c & d: 5 6
c = 5   d = 6
```

23. Write a program to multiple inheritance.

```c++
// 23. Write a program to multiple inheritance.

#include <iostream>

using namespace std;

class A{
    public:
        void show(){
            cout << "class A" << endl;
        }
};

class B{
    public:
        void show(){
            cout << "class B" << endl;
        }
};

class C:public A, public B{
    public:
        void show(){
            cout << "class C" << endl;
        }
};


int main(){
    C ob;
    ob.show();
    ob.A::show();
    ob.B::show();

    return 0;
}
```

```
OUTPUT:
class C
class A
class B
```
