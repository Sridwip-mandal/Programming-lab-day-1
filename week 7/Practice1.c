#include <stdio.h>

int main() {
    int i, j;
    int n = 3;  // Number of rows

    for (i = n; i >= 1; i--) {
        // Print left numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print spaces in between
        for (j = 1; j <= (n - i) * 2 - 1; j++) {
            printf(" ");
        }

        // Print right numbers (only if i != n)
        for (j = i; j >= 1; j--) {
            if (j == n) continue; // Avoid double printing middle number in first row
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
