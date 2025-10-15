/* Q54: Write a program to print the diamond pattern. */
#include <stdio.h>
int main() {
    int i, j, space = 3;
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= space; j++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
        space--;
        printf("\n");
    }
    space = 1;
    for(i = 3; i >= 1; i--) {
        for(j = 1; j <= space; j++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
        space++;
        printf("\n");
    }
    return 0;
}