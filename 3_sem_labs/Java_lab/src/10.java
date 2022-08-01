//10. Write a program to show the difference between public and private access specifiers. The program should also show that primitive data types are passed by value and objects are passed by reference and to learn use of final keyword. 

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
