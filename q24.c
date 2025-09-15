#include <stdio.h>

int main()
{

    for(int i = 1 ; i<=5 ; i++){
        for(int j = 1 ; j<=i ;  j++){
            printf("%d",j);
        }
        for(int m = i - 1 ; m>= 1; m--){
            printf("%d",m);
        }
        printf("\n");
    }
    return 0;
}