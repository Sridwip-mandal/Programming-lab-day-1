#include <stdio.h>

int main() {
    float a, b, res;
    char operator;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  
    printf("Enter second number: ");
    scanf("%f", &b);
    switch (operator) {
        case ('+'):
            res = a + b;
            printf("Result: %f\n", res);
            break;
        case ('-'):
            res = a-b ;
            printf("Result: %f\n", res);
            break;
        case ('*'):
            res = a*b;
            printf("Result: %f\n", res);
            break;
        case ('/'):
            if (b != 0) {
                res = a / b;
                printf("Result: %f\n", res);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
