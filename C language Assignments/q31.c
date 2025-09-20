#include<stdio.h>
int main(){
for(int k = 1 ; k<=5 ; k++){
    printf("*");
}
printf("\n");
for(int z= 1 ; z<4 ;  z++){
    for(int i = 1 ; i<= 5 ; i++){
        for(int j= 1 ; j>=i ; j--){
            printf("*   ");
        }
        for(int m = 1 ; m>=i ; m--){
            printf("*");
        }
 }
 printf("\n");
}
for(int y = 1 ; y<=5 ; y++){
    printf("*");
}    












    return 0;
}