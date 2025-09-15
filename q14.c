#include <stdio.h>

int main()
{
for(int i = 1 ; i<= 9 ; i++){
    for(int j = 9 ; j> i ; j--){
        printf(" ");
    }
    for(int m = 1 ; m<= i ; m++){
        printf("%d ",m);
    }
    printf("\n");
}

    return 0;
}