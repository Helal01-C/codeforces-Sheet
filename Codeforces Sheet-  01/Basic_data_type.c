#include<stdio.h>

int main () 
{
    int x;
    long long y;
    char ch[10];
    float b ;
    double c;

    scanf("%d",&x);
    scanf("%lld",&y);
    scanf("%s",&ch);
    scanf("%f",&b);
    scanf("%lf",&c);

    printf("%d\n",x);
    printf("%lld\n",y);
    printf("%s\n",ch);
    printf("%.2f\n",b);
    printf("%.1f\n",c);
    
    return 0;

}