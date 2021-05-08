# College home work.
I'm a first year BCA students so teachers are not going too hard on us.

![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQ46X8GC9H8dEnX-VIFwT1YNvmX4o8OPJsHlQ&usqp=CAU)

# 1. Add 2 ints.
simple program to add 2 ints.

```c
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
```
# 2. Circumference of a Circle.
simple program to check Circles circumference

```c
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
```
