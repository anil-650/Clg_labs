//14. Write a program that swaps two numbers using pointers.

#include <stdio.h>

int main (){
    int no1,no2,*p,*k,temp;

    printf( "Enter 2 no.\n");
    scanf("%d %d",&no1,&no2);

    p = &no1;
    k = &no2;

    printf("Before swap\t no1 = %d\tno2 = %d\n",*p,*k);

    temp = *p;
    *p = *k;
    *k = temp;

    printf( "After swap\t no1 = %d\tno2 = %d\n",*p,*k);

    return 0;
}
