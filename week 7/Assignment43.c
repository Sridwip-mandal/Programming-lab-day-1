#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if all numbers are equal
    if (a == b && b == c) {
        printf("All numbers are equal.\n");
    } 
    else {
        // Find the greatest number
        if (a > b && a > c)
            printf("The greatest number is %d\n", a);
        else if (b > a && b > c)
            printf("The greatest number is %d\n", b);
        else
            printf("The greatest number is %d\n", c);
    }

    // Check for all positive, all negative, or mixed numbers
    if (a > 0 && b > 0 && c > 0)
        printf("Entered numbers are all positive.\n");
    else if (a < 0 && b < 0 && c < 0)
        printf("Entered numbers are all negative.\n");
    else
        printf("Entered numbers are mixed numbers.\n");

    return 0;
}
