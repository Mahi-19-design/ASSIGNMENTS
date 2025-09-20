#include<stdio.h>
int main(){
  int n;
    scanf("%d",&n);
    int num= 65 ;
    for(int i = 65 ; i<=n ; i++){
        for(int j = 65 ; j<=n ; j++){
            printf("%c",num);
            num++;
        }
        printf("\n");
    }
    

    
    return 0;
}