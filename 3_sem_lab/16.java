//16. Write a program "DivideByZero" that takes two numbers a and b as input, -witte a program computes a/b, and invokes Arithmetic Exception to generate a message when the denominator is zero.

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

//OUTPUT
//Enter a:5
//Enter b:4
//a/b = 5.0/4.0=1.25
