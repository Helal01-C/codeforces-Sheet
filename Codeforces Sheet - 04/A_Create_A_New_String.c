#include <stdio.h>

int length(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char s1[1000], s2[1000];

    fgets(s1, 1000, stdin);
    fgets(s2, 1000, stdin);

    s1[length(s1) - 1] = '\0';
    s2[length(s2) - 1] = '\0';

    printf("%d %d\n", length(s1), length(s2));
    printf("%s %s\n", s1, s2);

    return 0;
}
