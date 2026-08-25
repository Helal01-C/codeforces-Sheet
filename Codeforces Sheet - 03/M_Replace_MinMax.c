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
    int max = 0, min = 0;
    for (int i = 1; i < N; i++)
    {
        if (arr[i] < arr[min])
        {
            min = i;
        }
        else if (arr[i] > arr[max])
        {
            max = i;
        }
    }
    int temp = arr[min];
    arr[min] = arr[max];
    arr[max] = temp;

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
