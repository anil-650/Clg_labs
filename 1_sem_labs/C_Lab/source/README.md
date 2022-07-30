```c
// Write a Program to find greatest among three numbers.


#include <stdio.h>
#include <conio.h>

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
```

```c
//2. Write a Program to all arithmetic operation using switch case. 

#include <stdio.h>
#include <conio.h>

int main(){
    int a,b;
    char c;

    printf("\nenter an operations from(+ - * / %%): ");
    scanf("%c", &c);
    
    printf("Enter 2 no.\n");
    scanf("%d %d",&a ,&b);

    switch(c)
    {
        default:
            printf("\nInvalid\n");
            break;

        case '+':
            printf("\n%d + %d = %d\n",a,b,a+b);
            break;
        case '-':
            printf("\n%d - %d = %d\n",a,b,a-b);
            break;
        case '*':
            printf("\n%d * %d = %d\n",a,b,a*b);
            break;
        case '/':
            printf("\n%d / %d = %d\n",a,b,a/b);
            break;
        case '%':
            printf("\n%d %% %d = %d\n",a,b,a % b);
            break;
    }

    return 0;
}
```



```c
//3. Write a Program to print the sum and product of digits of an integer.
#include <stdio.h>
#include <conio.h>

int main(){
    int a,b;
    printf("Enter 2 no.:\n");
    scanf("%d %d",&a ,&b);

    printf("Sum :%d\nProduct :%d\n",a+b,a*b);

    return 0;
}
```

```c
//4. Write a Program to reverse a number.
#include <stdio.h>
#include <conio.h>

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
```

```c
/*
*5. Write a Program to compute the sum of the first n terms of the following series 
*> S = 1+1/2+1/3+1/4+……
*/
#include <stdio.h>
#include <conio.h>

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
```

```c
/*
*6. Write a Program to compute the sum of the first n terms of the following series 
* > S=1-2+3-4+5......
*/

#include <stdio.h>
#include <conio.h>

int main(){
    int a,b,c,d,i;

    printf("Enter Series length: ");
    scanf("%d", &c);

    for(i=1;i<=c;i++){
        a=i; d=(a-(a+1));
        b+=d;
    }

    printf("Sum of the Series to nth term=%d",b);

    return 0;
}
```

```c
//7. Write a function that checks whether a given string is Palindrome or not. Use this function to find whether the string entered by user is Palindrome or not.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int is_palindrome(char s[]){
    int mid,len,i;
   mid = strlen(s)/2;
   len = strlen(s);

   for(i=0; i<mid; i++)
       if(s[i] != s[len-i-1])
           return 1;

   return 0;

}
//                  MAIN
int main(){
    char string[100];
    printf("Enter a String: ");
    scanf("%s",string);

    if(is_palindrome(string)==1)
        printf("\n%s - is not a Palindrome",string);
    else
        printf("\n%s - is a Palindrome",string);


    return 0;
}
```

```c
//8. Write a function to find whether a given no. is prime or not. Use the same to generate the       prime numbers less than 100.

#include <stdio.h>
#include <conio.h>

int prime(int n){
    int j,flag=0;
    for (j = 2; j <= n / 2; ++j) {

        if (n % j == 0) {
            flag = 1;
            break;
        }
    }
    return flag;
}

int main(){
    int a, i,num,count;
    printf("Enter a positive integer: ");
    scanf("%d", &a);
    if (a == 1) {
        printf("1 is neither prime nor composite.");
    } 
    else 
    {
        if (prime(a) == 0)
            printf("%d is a prime number.", a);
        else
            printf("%d is not a prime number.", a);
    }


    printf("\nprime number between 1 to 100 are :\n");  //print in new line
    for(num = 1; num <= 100; num++)
    {
        count = 0;

        if(prime(num) == 1){
            count++;
            continue;       // changed from break;
        }

        if(count == 0 && num != 1 )
            printf(" %d\t", num);   //\t
    }
    
    printf("\n");   //print new line 

    return 0;
}
```

```c
//9. Write a Program to compute the factors of a given number.

#include <stdio.h>
#include <conio.h>

int main (){
    int no,i,j;

    printf("Enter a no.:");
    scanf("%d",&no);

    printf("factors:\n%d",no);

    for(i=1 ; i<=no ; i++)
        for(j=1 ; j<=no/2 ; j++)
            if (j*i == no)
                printf("\n%d ",j);

    return 0;
}
```

```

# out 9
Enter a no.:45
factors:
45
15 
9 
5 
3 
1 
```

```c
//10. Write a program to swap two numbers using macro.

#include <stdio.h>
#include <conio.h>

#define SWAP(x, y, temp) temp = x; x = y; y = temp;

int main()
{
    int a, b, temp;

    printf("Enter 2 numbers\n");
    scanf("%d%d", &a, &b);

    printf("Before swapping: a = %d and b = %d\n", a, b);

    SWAP(a, b, temp);

    printf("After swapping: a = %d and b = %d\n", a, b);

    return 0;
}
```

```

# out 10
Enter 2 numbers
26  6
Before swapping: a = 2 and b = 6
After swapping: a = 6 and b = 2

```

```c
//11. Write a Program to print a triangle of stars as follows (take number of lines from user): 
//*
//***
//*****
//*******

#include <stdio.h>
#include <conio.h>

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
```

```

# out 11
Line no.:4 5 4
*
***
*****
*******

```

```c
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
#include <conio.h>
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

void e()     //delete duplicate from array
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
re_enter:
    load_array();

    opt_show();

    printf("\nEnter option: ");
    scanf(" %c",&x);

    switch(x){
        default:
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
        goto re_enter;
    }

    return 0;
}
```

```

# out 12
Enter the no of elements: 3
element [0] = 4
element [1] = 5
element [2] = 6

Array:
4 5 6 

a)Print the even-valued elements
b)Print the odd-valued elements
c)Calculate and print the sum and average of the elements of array
d)Print the maximum and minimum element of array
e)Remove the duplicates from the array
f)Print the array in reverse order

	q)Quit		r)Re-enter Array


Enter option: c

Sum of elements: 15 
Average of elements: 5
 
```

```c
//13. Write a Program that prints a table indicating the number of occurrences of each alphabet in the text entered as command line arguments.



#include <stdio.h>
#include <conio.h>
#include <string.h>

int main (){
    char s[30];
    int i,j,n,count;

    printf("Enter string:\n");
    scanf("%s",s);
    n =strlen(s);

    for(i=0;i<n;i++)  
    {
        count=1;
        if(s[i])
        {
            for(j=i+1;j<n;j++)  
            {   
                if(s[i]==s[j])
                {
                    count++;
                    s[j]='\0';
                }
            }  
            printf("'%c' = %d \n",s[i],count);
        }
    }

        return 0;
    }
```

```

# out 13
Enter string:
Nihar
'N' = 1 
'i' = 1 
'h' = 1 
'a' = 1 
'r' = 1 

```

```c
//14. Write a program that swaps two numbers using pointers.

#include <stdio.h>
#include <conio.h>

int main (){
    int no1,no2,*p,*k,temp;

    printf( "Enter 2 no.\n");
    scanf("%d %d",&no1,&no2);

    p = &no1;
    k = &no2;

    printf("Before swap\t no1 = %d\tno2 = %d\n",*p,*k);

    temp = *p;
    *p = *k;
    *k = temp;

    printf( "After swap\t no1 = %d\tno2 = %d\n",*p,*k);

    return 0;
}
```

```

# out 14
Enter 2 no.
65 78
Before swap	 no1 = 65	no2 = 78
After swap	 no1 = 78	no2 = 65

```

```c
//15. Write a program in which a function is passed address of two variables and then alter its contents.

#include <stdio.h>
#include <conio.h>

void alt(int *a, int *b){
    int temp;

    printf("Before altering num1 = %d\tnum2 = %d\n",*a,*b);

    temp = *a;
    *a = *b;
    *b = temp;

    printf("After altering  num1 = %d\tnum2 = %d\n",*a,*b);
}

int main (){
    int num1, num2;
    int *n1,*n2;

    printf("Enter 2 no.\n");
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);

    n1 =&num1 ; n2 =&num2 ;

    alt(n1,n2);

    return 0;
}
```

```

# out 15
Enter 2 no.
Enter num1: 4
Enter num2: 3
Before altering num1 = 4	num2 = 3
After altering  num1 = 3	num2 = 4

```

```c
/*16. Write a program which takes the radius of a circle as input from the user, passes it to another function that computes the area and the circumference of the circle and displays the value of area and circumference from the main( ) function.
*/


#include <stdio.h>
#include <conio.h>

void area_circum(float r){
    float area,circum,pi=3.14;

    area = pi*r*r;
    circum = 2*pi*r;

    printf("Area of circle = %.2f\n"
            "Circumference of circle = %.2f\n",area,circum);
}

int main (){
    float radius;

    printf("Enter Circles radius : ");
    scanf("%f",&radius);

    area_circum(radius);
    return 0;
}
```

```

# out 16
Enter Circles radius : 5
Area of circle = 78.50
Circumference of circle = 31.40

```

```c
//17. Write a program to find sum and average of n elements entered by the user. To write this program, allocate memory dynamically using malloc( ) / calloc( ) functions. 

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, count, *arr, sum = 0;

    printf("Enter the total number of elements you want to enter : ");
    scanf("%d", &count);

    arr = (int *)malloc(count * sizeof(int));
    //arr = (int *)calloc(count , sizeof(int));

    for (i = 0; i < count; i++){
        printf("Enter element %d : ", (i + 1));
        scanf("%d", arr + i);

        sum += *(arr + i);
    }

    printf("sum is %d average is %d\n", sum,sum/count);

    free(arr);
    return 0;
}
```

```

# out 17
Enter the total number of elements you want to enter : 3
Enter element 1 : 5
Enter element 2 : 6
Enter element 3 : 7
sum is 18 average is 6

```

```c
/*
 *18. Write a menu driven program to perform following operations on strings:
 *a) Show address of each character in string
 *b) Concatenate two strings without using strcat function. 
 *c) Concatenate two strings using strcat function. 
 *d) Compare two strings 
 *e) Calculate length of the string (use pointers) 
 *f) Convert all lowercase characters to uppercase 
 *g) Convert all uppercase characters to lowercase 
 *h) Calculate number of vowels
 *i) Reverse the string 
 */


#include <stdio.h>
#include <conio.h>
#include <string.h>

int i,j,len;
char s1[30],s2[30];

void load_arr(int n){
    if(n == 1){
        printf("Enter String :\n");
        scanf("%s",s1);
    }

    if(n == 2){
        printf("Enter String 1:\n");
        scanf("%s",s1);
        printf("Enter String 2:\n");
        scanf("%s",s2);
    }
}

void a(){       //index character in string
    load_arr(1);
    len = strlen(s1);

    for(i=0 ;i<len ;i++)
        printf("index[%d]= %c\n",i,s1[i]);
}

void b(){       //Concatenate without strcat
    load_arr(2);

    char temp[30];
    char *p,*q;
    int len2=strlen(s2);

    p=temp; q=p+len;
    len = strlen(s1);

    for(i = 0; i< len; i++)
        p[i] = s1[i];
    for(i = len,j = 0; j < len2; i++,j++)
        q[i] = s2[j];

    printf("Concatenate:\n %s\n",temp);
}

void c(){       //Concatenate with strcat
    load_arr(2);
    strcat(s1,s2);
    printf("Concatenate:\n%s\n",s1);
}

void d(){       //Compare 2 strings
    load_arr(2);
    int cmp;

    cmp=strcmp(s1,s2);
    if(cmp == 0)
        printf("Strings are equal\n");
    else
        printf("Strings aren't equal\n");
}

void e(){       //String length using pointers
    load_arr(1);
    char *p;
    p=s1; len = 0;

    while(*p != '\0'){
    len++;
    p++;
    }

    printf("string length: %d\n",len);
}

void f(){       //lowercase to uppercase
    printf("Enter all lowercase\n");
    load_arr(1);
    char *p=s1;

    printf("In uppercase\n");
    while(*p!='\0'){
        printf("%c", *p-32);
        p++;
    }
    printf("\n");
}

void g(){       //uppercase to lowercase
    printf("Enter all uppercase\n");
    load_arr(1);
    char *p=s1;

    printf("In lowercase\n");
    while(*p!='\0'){
        printf("%c", *p+32);
        p++;
    }
    printf("\n");
}

void h(){       //Calculate number of vowels
    load_arr(1);

    int count=0;
    char temp[5]="aeiou";
    char temp2[5]="AEIOU";

    for(i = 0; i <strlen(s1) ; i++)
        for(j = 0; j <5; j++)
            if(s1[i]==temp[j] || s1[i]==temp2[j])
                count++;

    printf("No. of vowel in string: %d\n",count);
}

void ii(){      //Reverse the string
    load_arr(1);

    int temp;
    len =strlen(s1);

    for(i=0; i<len/2; i++){
        temp = s1[i];
        s1[i] = s1[len-i-1];
        s1[len-i-1] = temp;
    }

    printf("%s\n",s1);
}

void show_opt(){
    printf("\n"
            "a) Show address of each character in string\n"
            "b) Concatenate two strings without using strcat function.\n"
            "c) Concatenate two strings using strcat function.\n"
            "d) Compare two strings\n"
            "e) Calculate length of the string (use pointers)\n"
            "f) Convert all lowercase characters to uppercase\n"
            "g) Convert all uppercase characters to lowercase\n"
            "h) Calculate number of vowels\n"
            "i) Reverse the string\n"
            "\n\n"
            "Enter option: ");
}

int main (){
    char x;

    show_opt();
    scanf(" %c",&x);

    switch(x){
        default:
            printf("\nInvalid\n");
            break;

        case 'a':           //index of char in string
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

        case 'g':
            g();
            break;

        case 'h':
            h();
            break;

        case 'i':
            ii();
            break;

    }
    return 0;
}
```

```
# out 18

a) Show address of each character in string
b) Concatenate two strings without using strcat function.
c) Concatenate two strings using strcat function.
d) Compare two strings
e) Calculate length of the string (use pointers)
f) Convert all lowercase characters to uppercase
g) Convert all uppercase characters to lowercase
h) Calculate number of vowels
i) Reverse the string


Enter option: g
Enter all uppercase
Enter String :
NIHAR
In lowercase
nihar

```

```c
//19. Given two ordered arrays of integers, write a program to merge the two-arrays to get an ordered array.

#include <stdio.h>
#include <conio.h>

int main()
{
    int n1,n2,n3;

    printf("\nEnter the size of 1st array: ");
    scanf("%d",&n1);
    printf("\nEnter the size of 2nd array: ");
    scanf("%d",&n2);

    n3=n1+n2;
    printf("\nEnter 1st array's sorted elements\n");

    int a[n1],b[n2],c[n3];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }

    int k=n1;
    printf("\nEnter 2nd array's sorted elements\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
        c[k]=b[i];
        k++;
    }

    printf("\nThe merged array..\n");
    for(int i=0;i<n3;i++)
        printf("%d ",c[i]);

    printf("\nAfter sorting...\n");
    for(int i=0;i<n3;i++)
    {
        int temp;
        for(int j=i+1; j<n3 ;j++)
        {
            if(c[i]<c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }

    for(int i=0 ; i<n3 ; i++)
        printf(" %d ",c[i]);

    return 0;
}
```

```
# out 19

Enter the size of 1st array: 3

Enter the size of 2nd array: 3

Enter 1st array's sorted elements
3 4 5

Enter 2nd array's sorted elements
6 7 8

The merged array..
3 4 5 6 7 8 
After sorting...
 8  7  6  5  4  3 
```

```c
//20. Write a program to copy the content of one file to other.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char ch, f1[20], f2[20];
    FILE *source, *target;

    printf("Enter file name to copy from :\n");
    scanf("%s",f1);

    source = fopen(f1, "r");
    if (source == NULL) {
        printf("File not found\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter file name to copy to :\n");
    scanf("%s",f2);

    target = fopen(f2, "w");
    if (target == NULL) {
        fclose(source);
        printf("Press any key to exit...\n");
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(source)) != EOF)
        fputc(ch, target);
    
    printf("File copied successfully.\n");
    fclose(source);
    fclose(target);
    return 0;
}
```

```
# out 20
Enter file name to copy from :
file1.txt
Enter file name to copy to :
file2.txt    

Contents copied to file2.txt
```
