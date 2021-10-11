//4. Write a Program to reverse a number.
#include <stdio.h>

int main(){
    int a,rev,temp;

    printf("Enter a no.:");
    scanf("%d",&a);


    while(a!=0){
        temp=a%10;
        rev=rev*10+temp;
        a=a/10;
    }

    printf("\nReverse: %d",rev);

    return 0;
}
