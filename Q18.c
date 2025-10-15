/* 
Q18 (Conditional Statements)
Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
*/
#include <stdio.h>

int main() {
    int p;
    printf("Enter percentage (0-100): ");
    if (scanf("%d", &p) != 1) return 0;
    if (p < 0 || p > 100) {
        printf("Invalid percentage\n");
        return 0;
    }
    if (p >= 90) printf("Grade A\n");
    else if (p >= 80) printf("Grade B\n");
    else if (p >= 70) printf("Grade C\n");
    else if (p >= 60) printf("Grade D\n");
    else printf("Grade F\n");
    return 0;
}
