/*
*12. Write a Program to perform following actions on an array entered by the user:
*
*a)Print the even-valued elements
*b)Print the odd-valued elements
*c)Calculate and print the sum and average of the elements of array
*d)Print the maximum and minimum element of array
*e)Remove the duplicates from the array
*f)Print the array in reverse order
*/


#include <stdio.h>

int no,i;

void load_array(int s[])
{
    printf("Enter the no of elements: ");
    scanf("%d",&no);

    for(i = 1; i <= no; i++)
    {
        printf("element [%d] = ",i);
        scanf("%d",&s[i]);
    }
}

void a(int h[])
{
    printf("Even elements in array : ");

    for(i = 1; i <= no; i++)
    {
        if(h[i]%2 == 0)
            printf("%d ",h[i]);
    }

    printf("\n");
}

void b(int k[])
{
    printf("Odd elements in array : ");

    for(i = 1; i <= no; i++)
    {
        if(k[i]%2 != 0)
            printf("%d ",k[i]);
    }

    printf("\n");
}

void c(int j[])
{
    int sum=0, avg=0;

    for(i = 1; i <= no; i++)
        sum+=j[i];

    avg = sum/no;

    printf("\nSum of elements: %d "
            "\nAverage of elements: %d\n ",sum,avg);
}

void d(int l[])
{
    printf("Odd elements in array : ");

    for(i = 1; i <= no; i++)
    {
        // print max & min element of array
    }

    printf("\n");
}


int main (){
    int arr[]={0};

    load_array(arr);
    a(arr);
    b(arr);
    c(arr);

    return 0;
}
