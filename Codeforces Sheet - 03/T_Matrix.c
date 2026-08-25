#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int A[100][100];
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < N; i++)
    {
        sum1 = sum1 + A[i][i];
        sum2 = sum2 + A[i][N - 1 - i];
    }
    if (sum1 > sum2)
    {
        printf("%d", sum1 - sum2);
    }
    else
    {
        printf("%d", sum2 - sum1);
    }
    return 0;
}