#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    long long x = *(long long *)a;
    long long y = *(long long *)b;
    return (x > y) - (x < y);
}

int main()
{
    int N, Q;
    scanf("%d %d", &N, &Q);

    long long arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &arr[i]);
    }
    qsort(arr, N, sizeof(long long), cmp);
    while (Q--)
    {
        long long X;
        scanf("%lld", &X);
        int l = 0, r = N - 1, f = 0;
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (arr[m] == X)
            {
                f = 1;
                break;
            }
            if (arr[m] < X)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        printf(f ? "found\n" : "not found\n");
    }
    return 0;
}