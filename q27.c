
#include <stdio.h>

int main()
{
    for(int i = 9;  i>=1; i--){
        for(int j = 9 ; j>=i; j--){
            printf(" ");
        }
        for(int m = 1 ; m<= 2*i - 9 ;m++){
            printf("%d",m);
        }
        printf("\n");
    }
    

    return 0;
}