
#include <stdio.h>

int main()
{
    
    for(int i = 1; i<= 7 ; i++){
        for(int j = 7; j>= i ; j--){
            printf(" ");
        }
        for(int m = 1 ; m<=2*i-1;m++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 7 ; i>= 1 ; i--){
        for(int j = 7 ; j>=i ; j--){
            printf(" ");
        }
        for(int n = 1 ; n<=2*i-1; n++){
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}