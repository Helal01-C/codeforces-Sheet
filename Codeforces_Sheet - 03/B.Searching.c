#include <stdio.h>

int main()
{
    int N, x;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    int index = -1;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == x)
        {
            index = i;
            break;
        }
    }
    printf("%d\n", index);
    return 0;
}