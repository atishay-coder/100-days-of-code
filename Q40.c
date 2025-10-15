/* 
Q40 (Loops without Arrays/Strings)
Write a program to find the 1’s complement of a binary number and print it.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char bin[100];
    printf("Enter a binary number: ");
    if (scanf("%s", bin) != 1) return 0;
    for (int i = 0; i < strlen(bin); i++) {
        if (bin[i] == '0') bin[i] = '1';
        else if (bin[i] == '1') bin[i] = '0';
        else {
            printf("Invalid binary number\n");
            return 0;
        }
    }
    printf("1's complement = %s\n", bin);
    return 0;
}
