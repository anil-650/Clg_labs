// Write a Program to find greatest among three numbers.


#include <stdio.h>

void greatest(int g){
    printf("\n%d is greatest\n",g);
}

int main(){

    int a,b,c;
    printf("Enter 3 no.\n");

    scanf("%d %d %d",&a ,&b ,&c);

    if(a>b||a>c)
        greatest(a);
    else if(b>c)
        greatest(b);
    else
        greatest(c);

    return 0;
}
