#include<stdio.h>
#include<math.h>
int main () {
      long long A , B, C, D;
      scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
       
    double left = (double)B * log((double)A);
    double right = (double)D * log((double)C);  
      
      
      if(left > right){
        printf("YES");
       }
       else {
        printf("NO");
       }
    return 0;
}