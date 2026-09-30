#include<stdio.h>

int main () {
      long long A , B, C, D;
      scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
       
    double left = (double)B * log((double)A);
    double right = (double)C * log((double)D);  
      
      
      if(left > right){
        printf("YES");
       }
       else {
        printf("NO");
       }
    return 0;
}