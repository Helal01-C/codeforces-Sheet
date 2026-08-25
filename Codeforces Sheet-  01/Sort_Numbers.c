#include<stdio.h>

int main () {
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);

    int x=a, y=b , z=c, temp;
   if(x>y){int temp=x;x=y;y=temp;}
   if(x>z){int temp=x;x=z;z=temp;}
   if(y>z){int temp=y;y=z;z=temp;}
   
   printf("%d\n%d\n%d\n",x,y,z);
   printf("\n");
   printf("%d\n%d\n%d\n",a,b,c);
   return 0;
}
