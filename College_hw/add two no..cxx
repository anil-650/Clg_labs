#include <stdio.h>
#include <conio.h>

void main()
{
	printf("This is a program to add 2 no. -");
	int a, b, c;

	//we will use a for 1st no.
	printf("Enter 1st number :");
	scanf("%d", &a);
	//we will use b for 2nd no.
	printf("Enter 2nd number :");
	scanf("%d", &b);
	//we will use c for storing ans
	c = a + b;
	printf("ans = %d", c);
	getch();
}