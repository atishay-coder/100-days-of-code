/* 
Q31 (Loops without Arrays/Strings)
Write a program to take a number as input and print its equivalent binary representation.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 0;
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    int bin[32], i = 0;
    while (n > 0) {
        bin[i++] = n % 2;
        n /= 2;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", bin[j]);
    printf("\n");
    return 0;
}
