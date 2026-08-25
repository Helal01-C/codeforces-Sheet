#include<stdio.h>
int main () {
    double N;
    scanf("%lf",&N);
   int intpart = (int)N;
   double decpart = N - intpart;
   if (decpart == 0) {
    printf("int %d\n",intpart);
   } else {
    printf("float %d %.3f\n",intpart,decpart);
   }

return 0;
}