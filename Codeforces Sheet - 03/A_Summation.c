#include <stdio.h>

int main()
{
    int N;
    long long sum = 0;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &arr[i]);
        sum = sum + arr[i];
    }
    if (sum < 0)
        sum = -sum;
    printf("%lld\n", sum);
    return 0;
}