
#include <stdio.h>

int main()
{
    
    for(int i = 73; i>=65 ; i--){
        for(int j = 73 ; j> i ; j--){
            printf(" ");
        }
        for(int m = 65 ; m<=2*i - 73 ; m++){
            printf("%c",m);
        }
        printf("\n");
    }
    

    return 0;
}