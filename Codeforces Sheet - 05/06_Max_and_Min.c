#include<stdio.h>

int  print_Maximum(int num, int min);
int  print_Minimum(int num, int min );

int  print_Maximum(int num , int max){
    if(num>max){
        max = num;
    }
    return max;
}
int  print_Minimum(int num ,int min){
    if(num<min){
        min = num;
    }
    return min;
}
int main () {
    int N , num;
    int max , min;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&num);
        if(i==1){
            max=min=num;
        }
        else{
            max = print_Maximum(num,max);
            min = print_Minimum(num,min);
        }
    }
 printf("%d %d\n",min,max);
    return 0;
}