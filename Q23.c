/* 
Q23 (Conditional Statements)
Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/
#include <stdio.h>

int main() {
    int days;
    printf("Enter number of late days: ");
    if (scanf("%d", &days) != 1) return 0;
    int fine = 0;
    if (days <= 0) fine = 0;
    else if (days <= 5) fine = days * 2;
    else if (days <= 10) fine = 5*2 + (days - 5)*4;
    else if (days <= 30) fine = 5*2 + 5*4 + (days - 10)*6;
    else {
        printf("Membership Cancelled\n");
        return 0;
    }
    printf("Fine = ₹%d\n", fine);
    return 0;
}
