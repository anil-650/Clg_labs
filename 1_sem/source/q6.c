/*
*6. Write a Program to compute the sum of the first n terms of the following series 
* > S=1-2+3-4+5......
*/

#include <stdio.h>

int main(){
    int a,b,c,d,i;

    printf("Enter Series length: ");
    scanf("%d", &c);

    for(i=1;i<=c;i++){
        a=i; d=(a-(a+1));
        b+=d;
    }

    printf("Sum of the Series to nth term=%d",b);

    return 0;
}
