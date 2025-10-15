/* Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms. */
#include <stdio.h>
int main() {
    int n;
    float sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(int i = 1, j = 1; i <= n; i++, j += 2)
        sum += (float)j / (j + 2);
    printf("Sum of series = %.2f", sum);
    return 0;
}