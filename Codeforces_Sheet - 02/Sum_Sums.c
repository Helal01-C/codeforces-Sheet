#include<stdio.h>

int main () {
    int N,A,B;
    scanf("%d %d %d",&N,&A,&B);
    int total = 0;
    for(int i = 1; i<=N; i++){
        int x = i;
        int sum = 0;
        while(x>0){
            sum = sum + (x%10);
            x = x/10;
        }
        if(sum >= A && sum <= B){
            total = total + i;
        }
    }
    printf("%d\n",total);
    return 0;
}