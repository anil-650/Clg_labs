//13. Write a Program that prints a table indicating the number of occurrences of each alphabet in the text entered as command line arguments.



#include <stdio.h>
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
