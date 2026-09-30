#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    char arr[100][100];
    for (int i = 0; i < N; i++)
    {
        scanf("%s", &arr[i]);
    }
    int X, Y;
    scanf("%d %d", &X, &Y);
    X--;
    Y--;

    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    for (int i = 0; i < 8; i++)
    {
        int nx = X + dx[i];
        int ny = Y + dy[i];
        if (nx >= 0 && nx < N && ny >= 0 && ny < M)
        {
            if (arr[nx][ny] != 'x')
            {
                printf("no\n");
                return 0;
            }
        }
    }
    printf("yes\n");
    return 0;
}