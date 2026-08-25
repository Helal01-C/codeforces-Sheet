#include<stdio.h>

void print_Number(int N){
    for(int i=1;i<=N;i++){
        if(i>1)
        printf(" ");
        printf("%d",i);
    }
}
int main () {
int N;
scanf("%d",&N);
print_Number(N);
return 0;
}