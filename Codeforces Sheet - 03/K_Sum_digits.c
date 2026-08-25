#include <stdio.h>

int main()
{
    int N, sum = 0;
    scanf("%d", &N);
    
    char s[1000005];   
    scanf("%s", s);

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = s[i] - '0';  
    }
    for (int i = 0; i < N; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d", sum);
    return 0;
}