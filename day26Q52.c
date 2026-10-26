#include <stdio.h>

int main()
{
    int i, j;
    int stars[] = {1, 3, 5, 4, 1};

    for(i = 0; i < 5; i++)
    {
        for(j = 1; j <= stars[i]; j++)
        {
            printf("*\n");
        }

        printf("\n");
    }

    return 0;
}