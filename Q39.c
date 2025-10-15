/* 
Q39 (Loops without Arrays/Strings)
Write a program to find the product of odd digits of a number.
*/
#include <stdio.h>

int main() {
    int n, prod = 1, hasOdd = 0;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 0;
    while (n != 0) {
        int d = n % 10;
        if (d % 2 != 0) {
            prod *= d;
            hasOdd = 1;
        }
        n /= 10;
    }
    if (hasOdd)
        printf("Product of odd digits = %d\n", prod);
    else
        printf("No odd digits found\n");
    return 0;
}
