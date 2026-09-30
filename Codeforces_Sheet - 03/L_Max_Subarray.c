#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int len = 1; len <= N; len++)
        {
            for (int i = 0; i + len <= N; i++)
            {
                int max = arr[i];
                for (int j = i; j < i + len; j++)
                {
                    if (arr[j] > max)

                        max = arr[j];
                }
                printf("%d ", max);
            }
        }
        printf("\n");
    }
    return 0;
}