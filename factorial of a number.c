#include <stdio.h>

int main()
{
    long int n, fact = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is equal to %d", n, fact);

    return 0;
}
