//2. Write a Program to all arithmetic operation using switch case. 

#include <stdio.h>

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
