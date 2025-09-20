#include<stdio.h>
int main(){

 int n;
    scanf("%d",&n);
    for(int i = 65 ; i<=n ; i++){
        for(int j = 65 ; j<=i ; j++){
            printf(" ");
        }
        for(int m = 65 ; m<=i ; m++){
            printf("%c",m);
        }
        printf("\n");
    }
    


    
    return 0;
}