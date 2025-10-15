/* 
Q29 (Loops without Arrays/Strings)
Write a program to calculate the factorial of a number.
*/
#include <stdio.h>

int main() {
    int n;
    long long fact = 1;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial of %d = %lld\n", n, fact);
    return 0;
}
