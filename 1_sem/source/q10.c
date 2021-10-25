//10. Write a program to swap two numbers using macro.

#include <stdio.h>

#define SWAP(x, y, temp) temp = x; x = y; y = temp;

int main()
{
    int a, b, temp;

    printf("Enter 2 numbers\n");
    scanf("%d%d", &a, &b);

    printf("Before swapping: a = %d and b = %d\n", a, b);

    SWAP(a, b, temp);

    printf("After swapping: a = %d and b = %d\n", a, b);

    return 0;
}
