//15. Write a program in which a function is passed address of two variables and then alter its contents.

#include <stdio.h>

void alt(int *a, int *b){
    int temp;

    printf("Before altering num1 = %d\tnum2 = %d\n",*a,*b);

    temp = *a;
    *a = *b;
    *b = temp;

    printf("After altering  num1 = %d\tnum2 = %d\n",*a,*b);
}

int main (){
    int num1, num2;
    int *n1,*n2;

    printf("Enter 2 no.\n");
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);

    n1 =&num1 ; n2 =&num2 ;

    alt(n1,n2);

    return 0;
}
