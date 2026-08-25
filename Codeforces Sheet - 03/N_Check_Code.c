#include <stdio.h>
#include <string.h>

int main()
{
    int A, B;
    char S[30];
    scanf("%d %d", &A, &B);
    scanf("%s", &S);
    if (S[A] != '-')
    {
        printf("No");
        return 0;
    }
    for (int i = 0; i < A + B + 1; i++)
    {
        if (i == A)
        {
            continue;
        }
        if (S[i] < '0' || S[i] > '9')
        {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}