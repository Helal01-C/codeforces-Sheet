#include <stdio.h>

int main()
{
    char S ;
    int N , i, x, j;
    scanf("%c", &S);
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &x);
        for (j = 0; j < x; j++)
        {
            printf("%c", S);
        }
        printf("\n");
    }
    return 0;
}