#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        long long arr[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%lld", &arr[i]);
        }
        long long ans = 0;
        long long len = 1;
        for (int i = 1; i < N; i++)
        {
            if (arr[i] >= arr[i - 1])
            {
                len++;
            }
            else
            {
                ans += len * (len + 1) / 2;
                len = 1;
            }
        }
        ans += len * (len + 1) / 2;
        printf("%lld\n", ans);
    }
    return 0;
}