#include <stdio.h>

int main() {
    int i, j, k;
    int num = 10; // starting number
    int n = 4;    // total rows

    for (i = 1; i <= n; i++) {
        // print leading spaces
        for (j = i; j < n; j++) {
            printf("  ");
        }

        // print decreasing numbers
        for (k = 1; k <= i; k++) {
            printf("%d ", num);
            num--;
        }

        printf("\n");
    }

    return 0;
}
