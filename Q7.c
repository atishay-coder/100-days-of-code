/* 
Q7 (User Inputs, Operations & Output)
Write a program to swap two numbers without using a third variable.
*/
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers (a b): ");
    if (scanf("%d %d", &a, &b) != 2) return 0;
    a = a + b;
    b = a - b; // now b = original a
    a = a - b; // now a = original b
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
