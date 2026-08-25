#include <stdio.h>
#include <string.h>

int main()
{
    char s[100005];
    long long sum = 0;
    scanf("%s", s);
    for (int i = 0; s[i] != 0; i++)
    {
        sum += s[i] - '0';
    }
    printf("%lld\n", sum);
    return 0;
}