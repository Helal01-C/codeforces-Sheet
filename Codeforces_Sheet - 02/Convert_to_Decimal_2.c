#include<stdio.h>

int main () {
    int N ;
    scanf("%d",&N);

    for(int i=0; i<N; i++){
        int n;
        scanf("%d",&n);
        int count = 0;
        for(;n>0;n=(n/2)){
            if(n%2 == 1){
                count++;
            }
        }
        int result = 1;
        for(int j=1; j<count; j++){
            result =(result*2)+1;
        }
        if(count == 0){
            result = 0;
        }
        printf("%d\n",result);
    }
    return 0;
}