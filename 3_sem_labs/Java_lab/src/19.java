//19. Write a program to demonstrate priorities among multiple threads. 

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

//OUTPUT
//main thread priority:6
//t1 thread priority:6
