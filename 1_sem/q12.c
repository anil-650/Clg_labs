/*
 *12. Write a Program to perform following actions on an array entered by the user:
 *
 *a)Print the even-valued elements
 *b)Print the odd-valued elements
 *c)Calculate and print the sum and average of the elements of array
 *d)Print the maximum and minimum element of array
 *e)Remove the duplicates from the array
 *f)Print the array in reverse order
 *The program should present a menu to the user and ask for one of the options. The menu should also include options to re-enter array and to quit the program.
 *
 */


#include <stdio.h>
#include <stdlib.h>

int no,i,j,k,array[30];

void load_array()
{
    printf("Enter the no of elements: ");
    scanf("%d",&no);

    for(i = 0; i < no; i++)
    {
        printf("element [%d] = ",i);
        scanf("%d",&array[i]);
    }

    printf("\nArray:\n");

    for(i = 0; i < no ; i++)
        printf("%d ",array[i]);
    printf("\n");
}

void a()     //even elements of array
{
    printf("\nEven elements in array : ");

    for(i = 0; i < no; i++)
    {
        if(array[i]%2 == 0)
            printf("%d ",array[i]);
    }

    printf("\n");
}

void b()     //odd elements of array
{
    printf("\nOdd elements in array : ");

    for(i = 0; i < no; i++)
    {
        if(array[i]%2 != 0)
            printf("%d ",array[i]);
    }

    printf("\n");
}

void c()     //sum & avg of array
{
    int sum=0, avg=0;

    for(i = 0; i < no; i++)
        sum+=array[i];

    avg = sum/no;

    printf("\nSum of elements: %d "
            "\nAverage of elements: %d\n ",sum,avg);
}

void d()     //min max element of array
{
    int large,small;
    large = small = array[0];

    for(i = 0; i < no; i++)
    {
        if(array[i] > large)
            large = array[i];

        if(array[i] < small)
            small = array[i];
    }

    printf("\nMax element:%d\nMin element:%d\n",large,small);
}

void e()     //delete duplicate from array NOT WORKING
{

    for(i=0 ; i<no; i++){
        for(j=i+1 ; j<no ; j++){
            if(array[i]==array[j]){
                for(k=j ; k<no ; k++){
                    array[k]=array[k+1];
                }
                no--;
                j--;
            }
        }
    }

    printf("After deleting duplicates:\n");
    for(i=0 ; i<no; i++)
        printf("%d ",array[i]);
    printf("\n");

}

void f()     //print array in reverse
{
    printf("\nArray in Reverse:\n");

    for(i = no-1; i >= 0; i--)
        printf("%d ",array[i]);

    printf("\n");
}

void opt_show()
{
    printf("\n"
            "a)Print the even-valued elements\n"
            "b)Print the odd-valued elements\n"
            "c)Calculate and print the sum and average of the elements of array\n"
            "d)Print the maximum and minimum element of array\n"
            "e)Remove the duplicates from the array\n"
            "f)Print the array in reverse order\n"
            "\n\tq)Quit\t\tr)Re-enter Array\n"
            "\n");
}

int main ()
{
    char x;
renter:
    load_array();

    opt_show();

    printf("\nEnter option: ");
    scanf(" %c",&x);

    switch(x){
defult:
        printf("\nInvalid\n");
        break;

        case 'a':
        a();
        break;

        case 'b':
        b();
        break;

        case 'c':
        c();
        break;

        case 'd':
        d();
        break;

        case 'e':
        e();
        break;

        case 'f':
        f();
        break;

        case 'q':
        exit(0);
        break;

        case 'r':
        goto renter;
    }

    return 0;
}
