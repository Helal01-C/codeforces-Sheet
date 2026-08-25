#include<stdio.h>
int main () {
    long long l1, l2, r1, r2;
    scanf("%lld %lld %lld %lld",&l1,&r1,&l2,&r2);

    long long L = (l1 > l2) ? l1 : l2;
    long long R = (r1 < r2) ? r1 : r2;

    if(L <= R){
        printf("%lld %lld\n",L,R);
    }
    else {
        printf("-1\n");
    }
    return 0;
}