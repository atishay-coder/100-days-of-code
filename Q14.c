/* 
Q14 (Conditional Statements)
Write a program to input a character and check whether it is a vowel or consonant using if–else.
*/
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    if (scanf(" %c", &ch) != 1) return 0;
    char lower = ch | 32; // convert to lowercase if alphabetic (works for ASCII)
    if ((lower >= 'a' && lower <= 'z') && (lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u'))
        printf("%c is a vowel\n", ch);
    else if ( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') )
        printf("%c is a consonant\n", ch);
    else
        printf("%c is not an alphabet\n", ch);
    return 0;
}
