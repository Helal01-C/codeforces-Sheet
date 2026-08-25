#include<stdio.h>

int main () {
    int N;
    scanf("%d",&N);
    int a = 0 , b = 1, c;
    for(int i = 0; i < N; i++){
        printf("%d",a);
        if(i<N)printf(" ");
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}