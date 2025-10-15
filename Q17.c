/* 
Q17 (Conditional Statements)
Write a program to find the roots of a quadratic equation and categorize them.
ax^2 + bx + c = 0
*/
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Enter coefficients a b c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 0;
    if (a == 0) {
        printf("Not a quadratic equation (a = 0)\n");
        return 0;
    }
    double disc = b*b - 4*a*c;
    if (disc > 0) {
        double r1 = (-b + sqrt(disc)) / (2*a);
        double r2 = (-b - sqrt(disc)) / (2*a);
        printf("Real and distinct roots: %.6lf and %.6lf\n", r1, r2);
    } else if (disc == 0) {
        double r = -b / (2*a);
        printf("Real and equal roots: %.6lf\n", r);
    } else {
        double real = -b / (2*a);
        double imag = sqrt(-disc) / (2*a);
        printf("Complex roots: %.6lf + %.6lfi and %.6lf - %.6lfi\n", real, imag, real, imag);
    }
    return 0;
}
