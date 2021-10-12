//8. Write a function to find whether a given no. is prime or not. Use the same to generate the       prime numbers less than 100.

#include <stdio.h>

void prime_no(){
    int num, count, i, prime;

    printf("Prime Numbers from 1 To 100 are\n");

    for(num = 1; num <= 100; num++)
    {
        if(num == 1)
        {
            printf("Number 1 is neither prime nor composite\n");
            continue;
        }

        count = num/2;
        prime = 1;
        for(i = 2; i <= count; i++)
        {
            if(num % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime == 1)
        {
            printf("%d\t", num);
        }
    }
}

int main(){
    prime_no();
    
    return 0;
}
