#include<stdio.h>
int main(){
    
     int n;
    scanf("%d",&n);
    int num=1;
    for(int i = 1 ; i<=n ; i++){
        for(int j = n ; j>=i ; j--){
            printf("  ");
        }
        for(int m = 1 ; m<= 2*i-1 ; m++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }

    return 0;
}