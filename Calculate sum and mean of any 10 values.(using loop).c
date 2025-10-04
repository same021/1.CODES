#include <stdio.h>

int main() {
    float num, sum = 0.0;

    printf("Enter 10 values:\n");

    // Read 10 values and add to sum
    for(int i = 1; i <= 10; i++) {
        printf("Enter value %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    // Calculate mean
    float mean = sum / 10.0;

    // Print results
    printf("\nSum of the 10 values: %.2f\n", sum);
    printf("Mean of the 10 values: %.2f\n", mean);

    return 0;
}
