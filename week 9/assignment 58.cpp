/*Mr. K wants to go harver for that he first he going straight 900 ft 9 inches then take a right turn 500 ft 5 inches . find out the total distance travelled by Mr. K .write a c program for it . */
#include <stdio.h>

int main() {
    int ft1 = 900, in1 = 9;   
    int ft2 = 500, in2 = 5;   

    int totalFeet, totalInches;

    totalInches = in1 + in2;
    totalFeet = ft1 + ft2;

    if (totalInches >= 12) {
        totalFeet += totalInches / 12;
        totalInches = totalInches % 12;
    }

    printf("Total distance travelled by Mr. K = %d feet %d inches\n", totalFeet, totalInches);

    return 0;
}

