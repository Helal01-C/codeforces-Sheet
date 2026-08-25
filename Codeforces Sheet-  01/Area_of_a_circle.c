#include<stdio.h>
#include<math.h>

int main ()
{
 double R;
 const double PI = 3.141592653;

 scanf("%lf",&R);

 double area = PI *R *R;

 printf("%.9f\n",area);

 return 0;
}