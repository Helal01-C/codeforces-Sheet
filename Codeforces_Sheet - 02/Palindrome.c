#include<stdio.h>

int main () {
    int N , orginal , digit, reversed = 0;
    scanf("%d",&N);
    orginal = N;
    for(; N > 0; N = N / 10){
        digit = N % 10;
        reversed = reversed * 10 + digit ;
    }
    if(orginal == reversed){
        printf("%d\nYES",orginal);
    }
    else {
        printf("%d\nNO",reversed);
    }
    return 0;
}