
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

void a(){
    load_arr(1);
    len = strlen(s1);

    for(i=0 ;i<len ;i++)
        printf("index[%d]= %c\n",i,s1[i]);
}

void b(){
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

void c(){
    load_arr(2);
    strcat(s1,s2);
    printf("Concatenate:\n%s\n",s1);
}

void d(){
    load_arr(2);
    int cmp;

    cmp=strcmp(s1,s2);
    if(cmp == 0)
        printf("Strings are equal\n");
    else
        printf("Strings aren't equal\n");
}

void e(){
    load_arr(1);
    char *p;
    p=s1; len = 0;

    while(*p != '\0'){
    len++;
    p++;
    }

    printf("string length: %d\n",len);
}

void f(){
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

void g(){
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

void h(){
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

            /*
        case 'i':
            a(string1);
            break;
            */

    }
    return 0;
}
