/* 
Q38 (Loops without Arrays/Strings)
Write a program to find the sum of digits of a number.
*/
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}
