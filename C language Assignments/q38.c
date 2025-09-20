#include<stdio.h>
int main(){


int n ;
scanf("%d",&n);
for(int i = n ; i>=1 ; i--){
    for(int j = n ; j>=i ; j--){
        printf(" ");
    }
    for(int m = 1 ; m<= i ; m++){
        printf("%d",m);
    }
    printf("\n");
}









    
    return 0;
}