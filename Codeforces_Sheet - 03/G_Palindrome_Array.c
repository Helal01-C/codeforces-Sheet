#include <stdio.h>

int main()
{
    int N, flag = 1;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N / 2; i++)
    {
        if (arr[i] != arr[N - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}