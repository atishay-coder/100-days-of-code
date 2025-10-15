/* 
Q36 (Loops without Arrays/Strings)
Write a program to find the HCF (GCD) of two numbers.
*/
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) return 0;
    int hcf;
    for (hcf = (a < b ? a : b); hcf >= 1; hcf--)
        if (a % hcf == 0 && b % hcf == 0)
            break;
    printf("HCF = %d\n", hcf);
    return 0;
}
