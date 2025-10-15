/* 
Q25 (Conditional Statements)
Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
*/
#include <stdio.h>

int main() {
    double a, b;
    char op;
    printf("Enter expression (a operator b): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) return 0;
    switch (op) {
        case '+': printf("Result = %.2lf\n", a + b); break;
        case '-': printf("Result = %.2lf\n", a - b); break;
        case '*': printf("Result = %.2lf\n", a * b); break;
        case '/': 
            if (b != 0) printf("Result = %.2lf\n", a / b);
            else printf("Division by zero error\n");
            break;
        case '%': 
            if ((int)b != 0) printf("Result = %d\n", (int)a % (int)b);
            else printf("Division by zero error\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
