/* 
Q34 (Loops without Arrays/Strings)
Write a program to check if a number is prime.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 0;
    if (n < 2) {
        printf("%d is not prime\n", n);
        return 0;
    }
    int isPrime = 1;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);
    return 0;
}
