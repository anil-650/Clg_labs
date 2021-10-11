//7. Write a function that checks whether a given string is Palindrome or not. Use this function to find whether the string entered by user is Palindrome or not.

#include <stdio.h>
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
