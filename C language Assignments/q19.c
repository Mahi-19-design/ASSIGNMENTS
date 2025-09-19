
#include <stdio.h>

int main()
{

int num1 = 1;
for(int i = 1 ; i<=5 ; i++){
    for(int j = 1 ; j<=i ; j++){
        printf("%d ",num1);
        num1++;
    }
    printf("\n");
}

    return 0;
}