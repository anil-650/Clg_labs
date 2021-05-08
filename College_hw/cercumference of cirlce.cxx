#include <stdio.h>
#include <conio.h>
#define PI 3.14

void main()
{
	int r, c;
	printf("find cercumference of a circle:-");
	printf("Enter radius of the circle :");
	scanf("%d", &r);

	c = 2 * PI * r;
	printf("ans = %d", c);
	getch();
}