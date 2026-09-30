#include<stdio.h>

int main () {
    int N,i,count = 0;
    scanf("%d",&N);
    for(i = 2; i < N; i++){
        if(N % i == 0){
        count ++ ;
        break;
        }
    }
    if(count == 0){
        printf("YES");
    }else {
        printf("NO");
    }
    return 0;
}