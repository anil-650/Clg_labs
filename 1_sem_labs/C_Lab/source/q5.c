/*
*6. Write a Program to compute the sum of the first n terms of the following series 
*> S = 1+1/2+1/3+1/4+……
*/
#include <stdio.h>

int main(){
    float a,b;
    int c,i;

    printf("Enter Series length: ");
    scanf("%d", &c);

    for(i=1;i<=c;i++){
        a=i; b+=1/a;
    }

    printf("Sum of the Series to nth term=%.2f",b);

    return 0;
}
