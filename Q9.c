/* 
Q9 (User Inputs, Operations & Output)
Write a program to calculate simple and compound interest for given principal, rate, and time.
Simple Interest = (P * R * T) / 100
Compound Interest computed annually.
*/
#include <stdio.h>
#include <math.h>

int main() {
    double P, R, T;
    printf("Enter principal, annual rate(%%), time(years): ");
    if (scanf("%lf %lf %lf", &P, &R, &T) != 3) return 0;
    double simple = (P * R * T) / 100.0;
    double amount = P * pow(1.0 + R/100.0, T);
    double compound = amount - P;
    printf("Simple Interest = %.2lf\n", simple);
    printf("Compound Interest = %.2lf\n", compound);
    return 0;
}
