// Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two integers:");
    scanf("%d%d", &a, &b);
    int c = a + b;
    printf("SUM OF YOUR TWO NUMBERS: %d", c);
    return 0;
}
