#include <stdio.h>

int main()
{
    int n, i, a[100], search, index = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            index = i;
            break;
        }
    }

    if(index != -1)
        printf("Found at index %d", index);
    else
        printf("-1");

    return 0;
}