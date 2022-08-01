//13. Create a mUlti-file program where in one file a string message is taken as input from the user and the function to display the message on the screen is given in another file (make use of Scanner package in this program).


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
