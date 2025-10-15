/* 
Q6 (User Inputs, Operations & Output)
Write a program to swap two numbers using a third variable.
*/
#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two integers (a b): ");
    if (scanf("%d %d", &a, &b) != 2) return 0;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
