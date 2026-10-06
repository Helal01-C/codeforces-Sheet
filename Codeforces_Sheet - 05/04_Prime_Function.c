#include <stdio.h>
void prime_Number(int N)
{
    int M;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &M);
        if (M <= 1)
        {
            printf("NO\n");
            continue;
        }
        int prime = 1;
        for (int j = 2; j * j <= M; j++)
        {
            if (M % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
int main()
{
    int N;
    scanf("%d", &N);
    prime_Number(N);
    return 0;
}