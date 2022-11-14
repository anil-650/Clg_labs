## 1. To find the sum of any number of integers entered as command line arguments.
```java
class Sum{
    public static void main(String[] values){
        int sum=0;
        System.out.println("Sum of integers:");
        for(int i=0; i<values.length; i++){
            System.out.println(values[i]);
            sum=sum+Integer.parseInt(values[i]);
        }
        System.out.println("Sum = "+sum);
    }
}
```

```
OUTPUT
java Sum 10 20 30
Sum of integers:
10
20
30
Sum:50
```


## 2. To find the factorial of a given number.
```java

class factorial{
	public static void main(String[] args) {
		int i, fact=1, num=5;

		for ( i = 1; i <= num; i++) {
		fact=fact*i;	
		}
		System.out.println("factorial of number " + num + " is " + fact);
	}

}
```

```
OUTPUT
factorial of number 5 is 120
```

## 3. To convert a decimal to binary number.
```java

class decimal_to_binary{
	public static void main(String[] args) {
		System.out.println(Integer.toBinaryString(10));
		System.out.println(Integer.toBinaryString(21));
	}
}
```

```
OUTPUT
1010
10101
```

## 4. To check if a number is prime not, by taking the number as input from the keyboard.
```java

import java.util.Scanner;

class prime {
	public static void main(String[] args) {
		int i, m=0, flag=0, n;
		Scanner sc = new Scanner(System.in);

		n = sc.nextInt();
		sc.close();
		m = n/2;

		if (n==0 || n==1) {
			System.out.println(n + " is not a prime number");
		}
		else{
			for (i = 2; i <= m; i++) {
				if (n%i==0) {
					System.out.println(n+" is not a prime number");
					flag=1;
					break;
				}
			}
		}
		if (flag==0) {
			System.out.println(n + " is prime number");
		}
	}
}
```

```
OUTPUT
5
5 is prime number
```

## 5. To find the sum of any number of integers interactively, i.e., entering every number from the keyboard, whereas the total number of integers is given as a command line argument
```java

import java.util.Scanner;

class sum{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int sum= 0;

		System.out.println("Enter " + args[0] + " integers");
		int a[] = new int[Integer.parseInt(args[0])];

		for (int i = 0; i < Integer.parseInt(args[0]); i++) {
			a[i]=sc.nextInt();
		}

		for (int i = 0; i < Integer.parseInt(args[0]); i++) {
			sum = sum+a[i];
		}

		System.out.println("Sum : " + sum);
		sc.close();
	}
}
```

```
OUTPUT
java Sum 4
Enter 4 integers
1
2
3
4
Sum : 10
```

## 6. Write a program that show working of different functions of String and StringBufferclasss like setCharAt(), setLength(), append(), insert(), concat( )and equals().
```java

class string{
	public static void main(String[] args) {
		String greet= "Hello World";
		int length= greet.length();
		System.out.println("length : "+ length);

		String f1= "Java ";
		String f2= "Programming";

		//String join= f1.concat(f2);
		System.out.println("joined string: " + f1.concat(f2));

		boolean r1= f1.equals(f2);
		System.out.println("Strings first and second are equal: " + r1);

		String str1= "IBMT";
		System.out.println(str1 + "'s 2nd index char is "+ str1.charAt(2)); 
		//int result = str1.indexOf('T');
		System.out.println("Index Of Character 'T' : " + str1.indexOf('T'));

		StringBuffer sb = new StringBuffer("Hello");
		sb.append("Java");
		System.out.println(sb);

		sb= new StringBuffer("Hello");
		sb.insert(1, "Java");
		System.out.println(sb);

		sb= new StringBuffer("Hello");
		System.out.println("String length = " + sb.length()+ " and contains = " + sb);

		sb.setLength(3);
		System.out.println("After Stringlenght string = " + sb);

		sb = new StringBuffer("Hello");
		sb.setCharAt(1, 'a');
		System.out.println(sb);

		StringBuffer sb1 = new StringBuffer("hello");
		StringBuffer sb2 = new StringBuffer("hell");
		System.out.println(sb1.equals(sb2));
	}
}
```

```
OUTPUT
length : 12
Joined String :Java Programming
String first and Second are equals: false
M
Index of Character 'T':3
HelloJava
HJavaello
String length=6 and contains = Hello
After setlength() string = Hel
Hello
false
```

## 7. Write program to create a "distance" class with methods where distance is computed in terms of feet and inches, how to create objects of a class and to see the use of this pointer
```java

import java.util.*;

class Distance{
    private int feet;
    private int inches;
    public void getDistance(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter feet:");
        feet = sc.nextInt();
        System.out.print("Enter inches:");
        inches = sc.nextInt();
        sc.close();
    }
    public void showDistance(){
        System.out.println("feet:"+feet+"\tinches:"+inches);
    }
    public void addDistance(Distance D1,Distance D2){
        inches = D1.inches + D2.inches;
        feet = D1.feet + D2.feet + (inches/12);
        inches = inches % 12;
    }
    public class Add{
        public static void main(String[] s){
            try {
                Distance D1 = new Distance();
                Distance D2 = new Distance();
                Distance D3 = new Distance();

                System.out.println("Enter first distance:");
                D1.getDistance();
                System.out.println("Enter second distance:");
                D2.getDistance();
                D3.addDistance(D1, D2);
                
                System.out.println("Total Distance is:");
                D3.showDistance();
            }catch(Exception e){
                System.out.println("Exception occurred:"+e.toString());
            }
            
            }
        }
    }

```

```
OUTPUT
Enter first distance:
Enter feet:20
Enter inches:10
Enter second distance:
Enter feet:20
Enter inches:6
Total distance is:
feet:40   inches:4
```

## 8. Modify the distance" class by creating constructor for assigning values. (feet and inches) to the distance object. Create another object and assign second object as reference variable to another object reference variable. Further create a third object which is a clone of the first object.
```java

class Dist {
    int feet;
    int inch;

    Dist(int f, int i) {
        feet = f;
        inch = i;
        System.out.println("Constructor");
    }

    void disp() {
        System.out.println("Feet: " + feet);
        System.out.println("Inch: " + inch);
    }

    Dist(Dist clone) {
        feet = clone.feet;
        inch = clone.inch;
        System.out.println("Clone Constructor");
    }

    public class Distance {
        public static void main(String[] args) {
            Dist d1 = new Dist(3, 5);
            Dist d2 = new Dist(d1);
            d1.disp();
            d2.disp();
        }
    }
}
```

```
OUTPUT
Constructor
Feet:3
Inch:5
Clone Constructor
Feet:3
Inch:5
```

## 9. Write a program to show that during function overloading, if no matching argument is found, then Java will apply automatic type conversions (from lower to higher data type)
```java

class cl{
    void f(int x){ System.out.println("integers"); }
    void f(float x){ System.out.println("float"); }
    void f(double x){ System.out.println("double"); }

    public class main{
        public static void main(String[] args){
            int a = 5;
            float b = 5.5F;
            double d = 55.55;
            cl ob = new cl();
            ob.f(a);
            ob.f(b);
            ob.f(d);
        }
    }
}
```

```
OUTPUT
integer
float
double
```

## 10. Write a program to show the difference between public and private access specifiers. The program should also show that primitive data types are passed by value and objects are passed by reference and to learn use of final keyword. 
```java

class Distance{
    public int f,i;
    private int m,c;
    public final int k = 1000;
    Distance(int f, int i){
        m = 100;
        c = 50;
        this.f = f;
        this.i = i;
    }
    void display(){
        System.out.println("feet = "+f);
        System.out.println("inches ="+i);
        System.out.println("meters = "+m);
        System.out.println("centimeters = "+c);
    }
    void add(Distance d3){
        d3.f = d3.f+k;
        d3.i = d3.i+k;
    }
}
public class Main{
    public static void main(String[] ags){
        Distance d1 = new Distance(10,20);
        Distance d2 = new Distance(20,30);
        d1.display();
        d1.add(d2);
        d2.display();
    }
}
```

```
OUTPUT
feet:10
inches:20
meters:100
centimeters:50
feet:1020
inches:1030
meters:100
centimeters:50
```

## 11. Write a program to show the use of static functions and to pass variable length arguments in a function.
```java


class main{
    static void display(String... values){
        System.out.println("Display method invoked");
    }
    public static void main(String args[]){
        display("my","name","is","Anil");
    }
}
```

```
OUTPUT
display method invoked
```

## 12. Write a program to demonstrate the concept of boxing and unboxing.
```java

import java.io.*;

public class GFG{
    public static void main(String[] args){
        Integer i = new Integer("10");
        int i1 = i;
        System.out.println("Value of i:"+i);
        System.out.println("Value of i1:"+i1);
        Character gfg ='a';
        char ch = gfg;
        System.out.println("Value of ch:"+ch);
        System.out.println("Value of gfg:"+gfg);
    }
}
```

```
OUTPUT
Value of i:10
Value of i1:10
Value of ch:a
Value of gfg:a
```

## 13. Create a multi-file program where in one file a string message is taken as input from the user and the function to display the message on the screen is given in another file (make use of Scanner package in this program).
```java


//Make a folder Multifile
//Inside folder create a file named as main.java

package Multifile;

import java.util.Scanner;

public class main{
    public String str1;
    public void readString(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter String:");
        str1 = sc.nextLine();
        sc.close();
    }
}

//---------------

import Multifile.main;
class Multifile{
    public static void main(String args[]){
        main p1 = new main();
        p1.readString();
        System.out.println(p1.str1);
    }
}
```

```
OUTPUT
Enter String
Hello
Hello
```

## 14. Write a program to create a multilevel package and also creates a reusable class to generate Fibonacci series, where the function to generate Fibonacci series is given in a different file belonging to the same package.
```java

import java.util.Scanner;

class Fibonacciseries{
    public static void main(String args[]){
        int len;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter length:");
        len = sc.nextInt();
        sc.close();
        int[] arr = new int[len];
        arr[0] = 0;
        arr[1] = 1;
        for(int i=2; i<len; i++){
            arr[i] = arr[i-1]+arr[i-2];
        }
        System.out.println("Fibonacci series");
        for(int i=0; i<len ;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
```

```
OUTPUT
Enter length:5
Fibonacci series:0 1 1 2 3
```

## 15. Write a program that creates illustrates different levels of protection in classes/subclasses belonging to same package or different packages.
```java

package Protection;

public class Protection {
    private int x = 2; 
    public int y = 30; 
    protected int z = 10; 
    int getX(){
        return x;
    }
    public static void main(String[] args) {
        adidas ad = new adidas();
        ad.display();
    }
}
class adidas extends Protection{
    public void display(){
        System.out.println("The value of x is\t "+getX());
        System.out.println("The value of y is\t "+y); 
        System.out.println("The value of z is\t "+z); 
    }
}

```

```
OUTPUT
The value of x is     2
The value of y is     30
The value of z is     10
```

## 16. Write a program "Divide By Zero" that takes two numbers a and b as input, -write a program computes a/b, and invokes Arithmetic Exception to generate a message when the denominator is zero.
```java

import java.util.Scanner;

class DivideByZero{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a:");
        double a = sc.nextDouble();
        System.out.println("Enter b:");
        double b = sc.nextDouble();
        sc.close();
        try{
            double result = a/b;
            System.out.println("a/b ="+a+"/"+b+"="+result);
        }catch(ArithmeticException ex){
            System.out.println("Division by Zero");
        }
    }
}

```

```
OUTPUT
Enter a:5
Enter b:4
a/b = 5.0/4.0=1.25
```

## 17. Write a program to show the use of nested try statements that emphasizes the sequence of checking for catch handler statements.
```java

class Nestedtry{
    public static void main(String args[]){
        try{
            int a[]={1,2,3,4,5};
            System.out.println(a[5]);;
            try{
                int x =a[2]/0;
            }catch(ArithmeticException e2){
                System.out.println("Division by Zero is not possible");
            }
        }catch(ArrayIndexOutOfBoundsException e1){
            System.out.println("Array Index Out Of Bounds Exception");
            System.out.println("Element at such Index doesn't exists");
            }
    }
}

```

```
OUTPUT
Array Index Out Of Bounds Exception
Element at such Index doesn't exists
```

## 18. Write a program to create your own exception types to handle situation specific to your application (Hint: Define a subclass of Exception which itself is a subclass of Throwable).
```java

class myexception extends Exception{
    public void Myexception(int i){
        System.out.println(i+"you entered is exceeding limit");
    }
}

public class ExceptionTest{
    public void show(int i)throws myexception{
        if(i>100)
            throw new myexception(i);
        else
            System.out.println(i+"is less than 100 it is ok");
    }
    public static void main(String args[]){
        int i = Integer.parseInt(args[0]);
        int j = Integer.parseInt(args[1]);
        ExceptionTest T = new ExceptionTest();
        try{
            T.show(i);
            T.show(j);
        }catch(Throwable e){
            System.out.println("Caught exception is"+e);
        }
    }
}

```

```
OUTPUT
JavacExecptionTest.java
Java ExecptionTest 5 105
5 is less than 100 it is ok
105 you entered is exceeding limit
Exception name is Myexception
```

## 19. Write a program to demonstrate priorities among multiple threads. 

```java

import java.lang.*;

class GFG extends Thread{
    public void run(){
        System.out.println("Inside run method");
    }
    public static void main(String args[]){
        Thread.currentThread().setPriority(6);
        System.out.println("main thread priority:"+Thread.currentThread().getPriority());
        GFG t1 = new GFG();
        System.out.println("t1 thread priority:"+t1.getPriority());
    }
}
```

```
OUTPUT
main thread priority:6
t1 thread priority:6
```
