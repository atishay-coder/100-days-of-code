/* 
Q19 (Conditional Statements)
Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
*/
#include <stdio.h>

int main() {
    double a, b, c;
    printf("Enter three side lengths: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 0;
    // Basic validity check
    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Not a valid triangle\n");
        return 0;
    }
    if (a == b && b == c)
        printf("Equilateral triangle\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles triangle\n");
    else
        printf("Scalene triangle\n");
    return 0;
}
