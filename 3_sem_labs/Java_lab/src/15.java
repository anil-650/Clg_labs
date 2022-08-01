//15. Write a program that creates illustrates different levels of protection in classes/subclasses belonging to same package or different packages.

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

//OUTPUT
//The value of x is     2
//The value of y is     30
//The value of z is     10
