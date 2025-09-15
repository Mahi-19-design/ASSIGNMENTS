#include <stdio.h>

int main()
{

for(int i = 65 ; i<=73 ; i++){
    for(int j = 73 ; j> i ; j--){
        printf(" ");
    }
    for(int m = 65 ; m<= i ; m++){
        printf("%c ",m);
    }
    printf("\n");
}


    return 0;
}