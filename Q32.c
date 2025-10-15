/* 
Q32 (Loops without Arrays/Strings)
Write a program to check if a number is a palindrome.
*/
#include <stdio.h>

int main() {
    int n, rev = 0, temp;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 0;
    temp = n;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (rev == n)
        printf("%d is a palindrome\n", n);
    else
        printf("%d is not a palindrome\n", n);
    return 0;
}
