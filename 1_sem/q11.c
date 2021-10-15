//11. Write a Program to print a triangle of stars as follows (take number of lines from user): 
//*
//***
//*****
//*******

#include <stdio.h>

void line(int l)
{
    int i,j;

    for(i=0 ; i< l ; i++)
    {
        for(j=0 ; j<= i*2 ; j++)
            printf("*");
        printf("\n");
    }
}

int main (){
    int no;
    printf("Line no.:");
    scanf("%d",&no);

    line(no);

    return 0;
}
