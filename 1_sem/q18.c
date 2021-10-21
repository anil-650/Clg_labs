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
#include <string.h>

int i,j,len;

void a(char z[]){
    len = strlen(z);

    for(i=0 ;i<len ;i++)
        printf("index[%d]= %c\n",i,z[i]);
}

void b(char x[], char y[]){
    int len2,len3,*ptr;
    
    len = strlen(x);
    len2 = strlen(y);
    len3 = len+len2;
    
    char xy[]={0};
    ptr = xy;

    for(i=0 ;i<len ;i++)
        ptr+i = x[i];





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
    char string1[]={0},string2[]={0},x;

    show_opt();
    scanf(" %c",&x);
    

    switch(x){
        default:
            printf("\nInvalid\n");
            break;

        case 'a':           //index of char in string
            printf("Enter String 1:\n");
            scanf("%s",string1);
            a(string1);
            break;

        case 'b':
            printf("Enter String 1:\n");
            scanf("%s",string1);
            printf("Enter String 2\n");
            scanf("%s",string2);
            b(string1, string2);
            break;

            /*
        case 'c':
            a(string1);
            break;

        case 'd':
            a(string1);
            break;

        case 'e':
            a(string1);
            break;

        case 'f':
            a(string1);
            break;

        case 'g':
            a(string1);
            break;

        case 'h':
            a(string1);
            break;

        case 'i':
            a(string1);
            break;
            */

    }
    return 0;
}
