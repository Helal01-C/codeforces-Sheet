#include<stdio.h>

int Summation(int , int);

int Summation(int a, int b){
    return a+b;
}
int main () {
    int a;
    int b;
    scanf("%d %d",&a,&b);
    
    int c = Summation(a,b);
    
    printf("%d\n",c);
    return 0;
}