//1. To find the sum of any number of integers entered as command line arguments.

class Sum{
    public static void main(String[] values){
        int sum=0;
        System.out.println("Sum of integers:");
        for(int i=0; i<values.length; i++){
            System.out.println(values[i]);
            sum=sum+Integer.parseInt(values[i]);
        }
        System.out.println("Sum = "+sum);
    }
}
