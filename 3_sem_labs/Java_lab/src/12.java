//12. Write a program to demonstrate the concept of boxing and unboxing.

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

//OUTPUT
//Value of i:10
//Value of i1:10
//Value of ch:a
//Value of gfg:a

