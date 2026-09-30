#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m = arr[0];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < m)
        {
            m = arr[i];
        }
    }
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == m)
        {
            count++;
        }
    }
    if (count % 2 == 1)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky");
    }
    return 0;
}