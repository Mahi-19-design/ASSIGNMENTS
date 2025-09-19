#include <stdio.h>

int main()
{

    for(int i = 65 ; i<=69 ; i++){
        for(int j = 65 ; j<= i ; j++){
            printf("%c",j);
        }
        for(int m =i-1 ; m>=65 ;  m--){
            printf("%c" , m);
        }
        printf("\n");
    }
    return 0;
}
