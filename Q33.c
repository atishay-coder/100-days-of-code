/* 
Q33 (Loops without Arrays/Strings)
Write a program to check if a number is an Armstrong number.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digits = 0;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 0;
    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    int sum = 0;
    while (temp != 0) {
        int r = temp % 10;
        sum += pow(r, digits);
        temp /= 10;
    }
    if (sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);
    return 0;
}
