#include<stdio.h>

int main () {
    int T ,X , Y;
   scanf("%d",&T);

   while(T--){
    scanf("%d %d",&X,&Y);
    int sum = 0;
    if(X>Y){
        int temp = X;
        X = Y;
        Y = temp;
    }
    for(int i = X + 1; i<Y ; i++){
        if(i % 2 != 0){
            sum = sum + i;
        }
    }
  printf("%d\n",sum);
}
return 0;
}