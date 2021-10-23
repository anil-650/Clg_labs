
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
char s1[30],s2[30];

void load_arr1(){
    printf("Enter String 1:\n");
    scanf("%s",s1);
}

void load_arr2(){
    printf("Enter String 2:\n");
    scanf("%s",s2);
}

void a(){
    load_arr1();
    len = strlen(s1);

    for(i=0 ;i<len ;i++)
        printf("index[%d]= %c\n",i,s1[i]);
}

void b(){
    
    load_arr1();
    load_arr2();
    
    printf("%s %lu\n",s1,strlen(s1));
    printf("%s %lu\n",s2,strlen(s1));
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
    char string1[30],x;

    show_opt();
    scanf(" %c",&x);
    

    switch(x){
        default:
            printf("\nInvalid\n");
            break;

        case 'a':           //index of char in string
            a(string1);
            break;

        case 'b':
            printf("Enter String 1:\n");
            scanf("%s",string1);
            b(string1);
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
