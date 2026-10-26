#include <stdio.h>

int main()
{
    int n, a[100], search;
    int low, high, mid, index = -1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == search)
        {
            index = mid;
            break;
        }
        else if(a[mid] < search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(index != -1)
        printf("Found at index %d", index);
    else
        printf("-1");

    return 0;
}