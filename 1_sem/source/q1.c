// Write a Program to find greatest among three numbers.


#include <stdio.h>

void great(int g){
    printf("\n%d is greatest\n",g);
}

int main(){

    int a,b,c;
    clrscr();
    printf("Enter 3 no.\n");

    scanf("%d %d %d",&a ,&b ,&c);

    (a>b||a>c) ? great(a) : (b>c ? great(b) : great(c));

    return 0;
}
