/* 
Q26 (Loops without Arrays/Strings)
Write a program to print numbers from 1 to n.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 1; i <= n; i++)
        printf("%d ", i);
    printf("\n");
    return 0;
}
