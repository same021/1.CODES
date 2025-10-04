#include <stdio.h>

int main() {
    float num, max, min;
    int i;

    printf("Enter 100 values:\n");

    // Read the first value and set it as initial max and min
    printf("Enter value 1: ");
    scanf("%f", &num);
    max = num;
    min = num;

    // Read the remaining 99 values and update max/min
    for(i = 2; i <= 100; i++) {
        printf("Enter value %d: ", i);
        scanf("%f", &num);
        if(num > max) {
            max = num;
        }
        if(num < min) {
            min = num;
        }
    }

    // Print results
    printf("\nLargest value: %.2f\n", max);
    printf("Smallest value: %.2f\n", min);

    return 0;
}
