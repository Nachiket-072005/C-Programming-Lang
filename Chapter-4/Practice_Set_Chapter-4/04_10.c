#include <stdio.h>

int main()
{
    int i = 2, n, prime = 0;

    printf("Enter the value of n : \n");
    scanf("%d", &n);

    do
    {
        i++;
        if (n % i != 0)
        {
            prime = 1;
            break;
        }
    } while (i < n);
    if (prime == 1)
    {
        printf("This is a prime no");
    }
    else
    {
        printf("This is not a prime no");
    }

    return 0;
}