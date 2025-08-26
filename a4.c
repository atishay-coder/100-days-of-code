// Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main()
{
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
}