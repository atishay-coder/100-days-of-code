/* 
Q15 (Conditional Statements)
Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
*/
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    if (scanf(" %c", &ch) != 1) return 0;
    if (ch >= 'A' && ch <= 'Z')
        printf("%c is uppercase alphabet\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c is lowercase alphabet\n", ch);
    else if (ch >= '0' && ch <= '9')
        printf("%c is a digit\n", ch);
    else
        printf("%c is a special character\n", ch);
    return 0;
}
