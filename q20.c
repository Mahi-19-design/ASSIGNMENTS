
#include <stdio.h>

int main()
{

int num = 65;
for(int i = 1 ; i<=6; i++){
    for(int j = 1 ; j<=i ; j++){
        printf("%c ",num);
        num++;
    }
    printf("\n");
}

    return 0;
}