#include<stdio.h>
#include<math.h>
int main () 
{
    double a , b ;
   scanf("%lf%lf",&a,&b);

   int f = floor(a / b) ;
   int c = ceil(a / b) ;
   int r = round(a / b) ;

  printf("floor %.0f / %.0f = %d\n", a, b, f);
  printf("ceil %.0f / %.0f = %d\n", a, b, c);
  printf("round %.0f / %.0f = %d\n", a, b, r);

  return 0;
} 