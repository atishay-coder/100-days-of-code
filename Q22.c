/* 
Q22 (Conditional Statements)
Write a program to find profit or loss percentage given cost price and selling price.
*/
#include <stdio.h>

int main() {
    double cp, sp;
    printf("Enter Cost Price and Selling Price: ");
    if (scanf("%lf %lf", &cp, &sp) != 2) return 0;
    if (sp > cp)
        printf("Profit = %.2lf%%\n", ((sp - cp) / cp) * 100.0);
    else if (cp > sp)
        printf("Loss = %.2lf%%\n", ((cp - sp) / cp) * 100.0);
    else
        printf("No profit, no loss\n");
    return 0;
}
