//2. Write a Program to all arithmetic operation using switch case. 

#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter 2 no.\n");
    scanf("%d %d",&a ,&b);

    printf("\nOperations:\n"
            "[1]Plus(+)\n"
            "[2]Minus(-)\n"
            "[3]Multiply(*)\n"
            "[4]Divide(/)\n"
            "[5]Moduls(%%)\n"
            "\nEnter no: ");

    scanf("%d", &c);

    switch(c)
    {
        default:
            printf("\nInvalid\n");
            break;

        case 1:
            printf("\n%d + %d = %d\n",a,b,a+b);
            break;
        case 2:
            printf("\n%d - %d = %d\n",a,b,a-b);
            break;
        case 3:
            printf("\n%d * %d = %d\n",a,b,a*b);
            break;
        case 4:
            printf("\n%d / %d = %d\n",a,b,a/b);
            break;
        case 5:
            printf("\n%d %% %d = %d\n",a,b,a % b);
            break;
    }

    return 0;
}
