/* 
Q37 (Loops without Arrays/Strings)
Write a program to find the LCM of two numbers.
*/
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) return 0;
    int lcm = (a > b) ? a : b;
    while (1) {
        if (lcm % a == 0 && lcm % b == 0)
            break;
        lcm++;
    }
    printf("LCM = %d\n", lcm);
    return 0;
}
