//5. To find the sum of any number of integers interactively, i.e., entering every number from the keyboard, whereas the total number of integers is given as a command line argument

import java.util.Scanner;

class sum{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int sum= 0;

		System.out.println("Enter " + args[0] + " integers");
		int a[] = new int[Integer.parseInt(args[0])];

		for (int i = 0; i < Integer.parseInt(args[0]); i++) {
			a[i]=sc.nextInt();
		}

		for (int i = 0; i < Integer.parseInt(args[0]); i++) {
			sum = sum+a[i];
		}

		System.out.println("Sum : " + sum);
		sc.close();
	}
}
