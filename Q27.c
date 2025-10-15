/* 
Q27 (Loops without Arrays/Strings)
Write a program to print the sum of the first n odd numbers.
*/
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 1, count = 0; count < n; i += 2, count++)
        sum += i;
    printf("Sum of first %d odd numbers = %d\n", n, sum);
    return 0;
}
