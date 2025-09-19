
#include <stdio.h>

int main()
{
 
    for(int i = 65 ; i<=69 ; i++){
        for(int j=69 ; j>=i ; j--){
            printf("  ");
        }
        for(int m = 65; m<=i ; m++){
            printf("%c ",m);
        }
        for(int n = i - 1 ; n>=65; n--){
            printf("%c ",n);
        }
        printf("\n");
    }
     

    return 0;
}