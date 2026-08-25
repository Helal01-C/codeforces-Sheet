#include<stdio.h>

int main () {
    int N;
    scanf("%d",&N);

    int years = N / 365;
    N = N % 365;

    int months = N / 30;
    int days = N % 30;
 printf("%d years\n",years);
 printf("%d months\n",months);
 printf("%d days\n",days);
 
 return 0;
}