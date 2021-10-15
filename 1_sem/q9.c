//9. Write a Program to compute the factors of a given number.

#include <stdio.h>

int main (){
    int no,i,j;

    printf("Enter a no.:");
    scanf("%d",&no);

    printf("factors:%d ",no);

    for(i=1 ; i<=no ; i++)
        for(j=1 ; j<=no/2 ; j++)
            if (j*i == no)
                printf("%d ",j);
    printf("\n");

    return 0;
}
