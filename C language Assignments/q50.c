#include<stdio.h>
int main(){

  int n;
  scanf("%d",&n);
  int num = n ;
  for(int i = n ; i>=1; i--){
      for(int j= n ; j>=i && num>0 ; j--){
          printf("%d",num);
          num--;
      }
      printf("\n");
  }
    
    return 0;
}