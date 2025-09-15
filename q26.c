
#include <stdio.h>

int main()
{
 for(int i=1 ; i<=10 ; i++){
        for(int j = 1 ; j<=i ; j++){
            printf(" ");
        }
        for(int m = 10 ; m>=2*i - 1 ; m--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}