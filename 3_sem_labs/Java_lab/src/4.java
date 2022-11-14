//4. To check if a number is prime not, by taking the number as input from the keyboard.

import java.util.Scanner;

class prime {
	public static void main(String[] args) {
		int i, m=0, flag=0, n;
		Scanner sc = new Scanner(System.in);

		n = sc.nextInt();
		sc.close();
		m = n/2;

		if (n==0 || n==1) {
			System.out.println(n + " is not a prime number");
		}
		else{
			for (i = 2; i <= m; i++) {
				if (n%i==0) {
					System.out.println(n+" is not a prime number");
					flag=1;
					break;
				}
			}
		}
		if (flag==0) {
			System.out.println(n + " is prime number");
		}
	}
}
