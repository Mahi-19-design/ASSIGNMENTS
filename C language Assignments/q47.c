#include<stdio.h>
int main(){
   
    int n;
    scanf("%d",&n);
    int num=2;
    for(int i = 2 ; i<= n ; i++){
        for(int j=2 ; j<=i ; j++){
            printf("%d ",num);
            num=num +  2;
        }
        printf("\n");
    }
    

    
    return 0;
}