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

# 3. Enter matrix ,transpose matrix ,add another given matrix.

```c
#include <stdio.h>
int main (){
	int a[10][10],b[10][10];
	int i,j,r,c; //row, column
	
//	Enter row & column no.
	printf("enter row and column no.: ");
	scanf("%d%d",&r, &c);

//	Enter array
	printf("\nenter elements of first matrix\n");
	for (i=0; i<r; i++){
	   for (j=0; j<c; j++){
	      scanf("%d",&b[i][j]);}
	}
	
//	transpose
	for (i=0; i<r; ++i){
	   for (j=0; j<c; ++j){
	      a[j][i] =b[i][j];}
	}
	
//	print transpose
	printf("\nprinting transposed array\n");
	for (i=0; i<c; ++i){
	   for (j=0; j<r; ++j){
	      printf("%d ",a[i][j]);}
	   printf("\n");
	}

//	add array
	int d[10][10], e[10][10];
	int x, y;
	printf("\nEnter the row and column of 2nd matrix: ");
	scanf("%d%d", &x, &y);

//	check for row and column 
	if ((x!=c)||(y!=r)){
	printf("\nSry cannot add matrix");
	}
	else
	{
//	input for 2nd array
	for (i=0; i<x ; i++){
	   for (j=0; j<y; j++){
		scanf("%d",&d[i][j]);}
	}

//	adding
	for (i=0; i<x; i++){
	   for (j=0; j<y; j++){
	      e[i][j]=d[i][j]+a[i][j];}
		}
//	printing
	printf("\naddition:\n");
	for (i=0; i<x ; i++){
	   for (j=0; j<y ; j++){
		printf("%d ", e[i][j]);}
		printf("\n");}
	}

	return 0;
}
```
