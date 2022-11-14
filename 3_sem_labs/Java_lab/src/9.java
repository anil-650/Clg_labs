//9. Write a program to show that during function overloading, if no matching argument is found, then Java will apply automatic type conversions (from lower to higher data type)

class cl{
    void f(int x){ System.out.println("integers"); }
    void f(float x){ System.out.println("float"); }
    void f(double x){ System.out.println("double"); }

    public class main{
        public static void main(String[] args){
            int a = 5;
            float b = 5.5F;
            double d = 55.55;
            cl ob = new cl();
            ob.f(a);
            ob.f(b);
            ob.f(d);
        }
    }
}
