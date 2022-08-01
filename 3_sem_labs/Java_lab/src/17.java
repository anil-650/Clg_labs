//17. Write a program to show the use of nested try statements that emphasizes the sequence of checking for catch handler statements.

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

//OUTPUT
//Array Index Out Of Bounds Exception
//Element at such Index doesn't exists
