#include<stdio.h>
int main(){


 int n ;
    scanf("%d",&n);
    for(int i = n ; i>=65 ; i--){
        for(int j = n ; j>=i ; j--){
            printf(" ");
        }
        for(int m = 65 ; m<= i ; m++){
            printf("%c",m);
        }
        printf("\n");
    }



    
    return 0;
}