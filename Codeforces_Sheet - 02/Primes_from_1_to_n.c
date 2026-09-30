#include<stdio.h>

int main () {
    int N , i , count ;
    scanf("%d",&N);
    for(i = 2;i <= N; i++){
            count = 0;

        for(int j = 2; j<i; j++){
            if(i % j == 0){
             count++;   
            break;
            }
        }  
    
    if(count == 0){
        printf("%d ",i);
    }
}
    return 0;
}