/* 
Q16 (Conditional Statements)
Write a program to input three numbers and find the largest among them using if–else.
*/
#include <stdio.h>

int main() {
    double a, b, c;
    printf("Enter three numbers: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 0;
    double largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    printf("Largest = %.2lf\n", largest);
    return 0;
}
