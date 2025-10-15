/* 
Q8 (User Inputs, Operations & Output)
Write a program to find and display the sum of the first n natural numbers.
*/
#include <stdio.h>

int main() {
    int n, i;
    long sum = 0;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1) return 0;
    for (i = 1; i <= n; ++i) sum += i;
    printf("Sum of first %d natural numbers = %ld\n", n, sum);
    return 0;
}
