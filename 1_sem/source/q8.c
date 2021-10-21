#include <stdio.h>

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


    printf("prime number between 1 to 100 are :\n");
    for(num = 1; num <= 100; num++)
    {
        count = 0;

        if(prime(num) == 1)
        {
            count++;
            continue;       // changed from break;
        }

        if(count == 0 && num != 1 )
        {
            printf(" %d ", num);
        }  
    }

    return 0;
}
