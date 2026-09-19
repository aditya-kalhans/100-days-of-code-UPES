#include <stdio.h>

int main()
{
    long long n, result = 0, place = 1;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit == 0)
        {
            digit = 1;
        }
        else
        {
            digit = 0;
        }

        result = result + digit * place;
        place = place * 10;
        n = n / 10;
    }

    printf("1's complement = %lld", result);

    return 0;
}