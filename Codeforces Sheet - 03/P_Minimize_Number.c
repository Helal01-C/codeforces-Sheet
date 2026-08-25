#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    long long int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ans = 100;
    for (int i = 0; i < N; i++)
    {
        int cnt = 0;
        while (arr[i] % 2 == 0)
        {
            arr[i] /= 2;
            cnt++;
        }
        if (cnt < ans)
        {
            ans = cnt;
        }
    }
    printf("%d\n", ans);
    return 0;
}