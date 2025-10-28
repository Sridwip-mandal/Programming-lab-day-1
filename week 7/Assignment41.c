#include <stdio.h>

int main() {
    int age;
    int flag; // flag variable to use in switch

    printf("Enter your age: ");
    scanf("%d", &age);

    // Check eligibility
    if (age >= 18)
        flag = 1;   // eligible
    else
        flag = 0;   // not eligible

    // Using switch case
    switch (flag) {
        case 1:
            printf("You are eligible to vote.\n");
            break;
        case 0:
            printf("You are not eligible to vote.\n");
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}
