#include<stdio.h>

int main () {
    int N;
    scanf("%d",&N);

    for(int i=0;i<N;i++){
        int n;
        scanf("%d",&n);
        if(n==0){
            printf("0");
        }
    for(;n>0;n=(n/10)){
        printf("%d",n%10);
        if(n>=10){
            printf(" ");
        }
    }
    printf("\n");
    }
    return 0;
}