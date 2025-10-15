/* 
Q11 (Conditional Statements)
Write a program to input an integer and check whether it is even or odd using if–else.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) return 0;
    if (n % 2 == 0)
        printf("%d is even\n", n);
    else
        printf("%d is odd\n", n);
    return 0;
}
