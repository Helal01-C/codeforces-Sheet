#include <stdio.h>

int main()
{
    int N;
    long long fib[100];
    scanf("%d", &N);

     fib[1] = 0;
     fib[2] = 1;
    for (int i = 3; i <= N; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    printf("%lld", fib[N]);
    return 0;
}