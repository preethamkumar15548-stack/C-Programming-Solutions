#include <stdio.h>

void primee(int n)
{
    int i;
    int isprime = 1;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            isprime = 0;
            break;
        }
    }

    if(isprime == 1)
    {
        printf("%d is prime", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
}

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    primee(n);

    return 0;
}
