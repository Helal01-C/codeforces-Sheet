#include<stdio.h>

int main () 
{
 long long x, y;
 long long o ,n , p;
 scanf("%lld %lld", &x, &y);

 o = x + y;
 n = x * y;
 p = x - y;

 printf("%lld + %lld = %lld\n", x ,y , o);
 printf("%lld * %lld = %lld\n", x , y, n);
 printf("%lld - %lld = %lld\n", x , y , p);

 return 0;
}