#include<stdio.h>

int main () {
 int X;
 while((scanf("%d",&X))){
    if(X==1999){
        printf("Correct");
        break;
    }
    else{
        printf("Wrong");
    }
 }
return 0;
}