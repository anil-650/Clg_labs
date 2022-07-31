//14. Write a program to create a multilevel package and also creates a reusable class to generate Fibonacci series, where the function to generate Fibonacci series is given in a different file belonging to the same package.

import java.util.Scanner;

class Febonnacciseries{
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
        System.out.println("Febonnacci series");
        for(int i=0; i<len ;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
