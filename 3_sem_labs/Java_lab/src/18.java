import javax.management.MBeanException;

//18. Write a program to create your own exception types to handle situation specific to your application (Hint: Define a subclass of Exception which itself is a subclass of Throwable).

class myexception extends Exception{
    public void Myexception(int i){
        System.out.println(i+"you entered is exceeding limit");
    }
}

public class ExceptionTest{
    public void show(int i)throws myexception{
        if(i>100)
            throw new myexception(i);
        else
            System.out.println(i+"is less than 100 it is ok");
    }
    public static void main(String args[]){
        int i = Integer.parseInt(args[0]);
        int j = Integer.parseInt(args[1]);
        ExceptionTest T = new ExceptionTest();
        try{
            T.show(i);
            T.show(j);
        }catch(Throwable e){
            System.out.println("Caught exception is"+e);
        }
    }
}

//OUTPUT
//JavacExecptionTest.java
//Java ExecptionTest 5 105
//5 is less than 100 it is ok
//105 you entered is exceeding limit
//Exception name is Myexception
