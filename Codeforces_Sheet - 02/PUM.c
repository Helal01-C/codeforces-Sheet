#include<stdio.h>

int main () {
    int N , num = 1;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        for(int j=1; j<4;j++){
       printf("%d ",num);
       num++;
        }
        printf("PUM\n");
        num++;
    }
    return 0;
}