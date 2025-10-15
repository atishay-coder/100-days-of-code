/* 
Q28 (Loops without Arrays/Strings)
Write a program to print the product of even numbers from 1 to n.
*/
#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 2; i <= n; i += 2)
        product *= i;
    printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    return 0;
}
