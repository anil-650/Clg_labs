//11. Write a program to show the use of static functions and to pass variable length arguments in a function.


class main{
    static void display(String... values){
        System.out.println("Display method invoked");
    }
    public static void main(String args[]){
        display("my","name","is","Anil");
    }
}
