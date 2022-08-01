//2. To find the factorial of a given number.

class factorial{
	public static void main(String[] args) {
		int i, fact=1, num=5;

		for ( i = 1; i <= num; i++) {
		fact=fact*i;	
		}
		System.out.println("factorial of number " + num + " is " + fact);
	}

}
