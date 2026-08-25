#include<stdio.h>

int main () {
    int N;
    scanf("%d",&N);
    int max,x,i = 0;
    while(i<N){
    scanf("%d",&x);
        if(i == 0 || x>max){
            max=x;
        }
        i++;
    }
    printf("%d",max);
    return 0;
}