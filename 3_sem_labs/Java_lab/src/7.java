//7. Write program to create a "distance" class with methods where distance is computed in terms of feet and inches, how to create objects of a class and to see the use of this pointer

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

