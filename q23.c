#include <stdio.h>

int main()
{
    
for(int i = 69 ; i>=65 ; i--){
    for(int j = 69 ; j>=i ; j--){
        printf(" ");
    }
    for(int m = 65 ; m<=i ; m++){
        printf("%c",m);
    }
    printf("\n");
}
    

    return 0;
}