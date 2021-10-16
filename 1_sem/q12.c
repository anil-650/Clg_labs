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

    for(i = 0; i < no; i++)
    {
        printf("element [%d] = ",i+1);
        scanf("%d",&s[i]);
    }

    printf("\nArray:\n");

    for(i = 0; i < no ; i++)
        printf("%d ",s[i]);
    printf("\n");

}

void a(int h[])     //even elements of array
{
    printf("\nEven elements in array : ");

    for(i = 0; i < no; i++)
    {
        if(h[i]%2 == 0)
            printf("%d ",h[i]);
    }

    printf("\n");
}

void b(int k[])     //odd elements of array
{
    printf("\nOdd elements in array : ");

    for(i = 0; i < no; i++)
    {
        if(k[i]%2 != 0)
            printf("%d ",k[i]);
    }

    printf("\n");
}

void c(int j[])     //sum & avg of array
{
    int sum=0, avg=0;

    for(i = 0; i < no; i++)
        sum+=j[i];

    avg = sum/no;

    printf("\nSum of elements: %d "
            "\nAverage of elements: %d\n ",sum,avg);
}

void d(int l[])     //min max element of array
{
    int large,small;
    large = small = l[0];

    for(i = 0; i < no; i++)
    {
        if(l[i] > large)
            large = l[i];

        if(l[i] < small)
            small = l[i];
    }

    printf("\nMax element:%d\nMin element:%d\n",large,small);
}

void e(int m[])     //delete duplicate from array NOT WORKING
{
    int uniq,exsist,j=0,k,temp[]={0};

    for(i = 0; i < no; i++)
    {
        uniq=m[i];
        exsist=0;
        for(k = 0; k < i; k++){
            if(temp[k]==uniq)
                exsist=1;
        }

        if(!exsist){
            temp[j]=m[i];
            j++;
        }

        printf("\nAfter deleting duplicates from Array:\n");
        for(i = 0; i < no ; i++)
            printf("%d ",temp[i]);


    }
}

void f(int o[])     //print array in reverse
{
    printf("\nArray in Reverse:\n");

    for(i = no-1; i >= 0; i--)
        printf("%d ",o[i]);

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
            "\n");
}

int main (){
    int arr[]={0};
    char x;

    load_array(arr);

    opt_show();

    printf("\nEnter option: ");
    scanf(" %c",&x);

    switch(x){
defult:
        printf("\nInvalid\n");
        break;

        case 'a':
        a(arr);
        break;

        case 'b':
        b(arr);
        break;

        case 'c':
        c(arr);
        break;

        case 'd':
        d(arr);
        break;

        case 'e':
        e(arr);
        break;

        case 'f':
        f(arr);
        break;
    }

    return 0;
}
