// Write a Program to find greatest among three numbers.


#include <stdio.h>

int main(){

    int a,b,c;
    printf("Enter 3 no.\n");

    scanf("%d %d %d",&a ,&b ,&c);

    if(a>b||a>c)
        printf("\n%d greatest\n",a);
    else if(b>c)
        printf("\n%d greatest\n",b);
    else
        printf("\n%d greatest\n",c);

    return 0;
}
