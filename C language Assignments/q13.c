#include <stdio.h>

int main()
{
for(int i = 1 ; i<=10 ; i++){
    for(int j = 10 ; j > i ; j--){
        printf(" ");
    }
    for(int m = 1 ; m<= 2*i-1 ; m++){
        printf("*");
    }
    printf("\n");
}

    return 0;
}