/* Q41: Write a program to swap the first and last digit of a number. */
#include <stdio.h>
int main() {
    int num, first, last, digits = 0, temp, power = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    last = num % 10;
    while(temp >= 10) {
        temp /= 10;
        digits++;
        power *= 10;
    }
    first = temp;
    num = (num % power) / 10;
    int swapped = last * power + num * 10 + first;
    printf("Number after swapping first and last digit = %d", swapped);
    return 0;
}