

 #include <stdio.h>

int main() {
    int n = 5;  // height
    int i, j;

    for (i = n; i >= 1; i--) {
        // leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // stars and inner spaces
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n)  // border stars
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

 
