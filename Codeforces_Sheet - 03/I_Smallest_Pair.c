#include <stdio.h>
#include <limits.h>

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
        int min = INT_MAX;
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                int value = arr[i] + arr[j] + (j - i);
                if (value < min)
                {
                    min = value;
                }
            }
        }
        printf("%d\n", min);
    }
    return 0;
}