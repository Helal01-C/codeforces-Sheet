#include<stdio.h>

int main () {
    int T , N ;
    scanf("%d",&T);

    for(int t = 0 ; t<T; t++){
    scanf("%d",&N);

    long long fact = 1;

    for(int i = 1; i <= N; i++){
        fact = fact * i ;
    }
    printf("%lld\n",fact);
}
    return 0;
}