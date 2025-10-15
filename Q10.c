/* 
Q10 (User Inputs, Operations & Output)
Write a program to input time in seconds and convert it to hours:minutes:seconds format.
*/
#include <stdio.h>

int main() {
    long seconds;
    printf("Enter time in seconds: ");
    if (scanf("%ld", &seconds) != 1) return 0;
    long hours = seconds / 3600;
    long minutes = (seconds % 3600) / 60;
    long secs = seconds % 60;
    printf("%02ld:%02ld:%02ld\n", hours, minutes, secs);
    return 0;
}
