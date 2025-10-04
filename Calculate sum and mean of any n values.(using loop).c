#include <stdio.h>

int main() {
    int n;
    float num, sum = 0.0;

    printf("Enter the number of values (n): ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Please enter a positive number for n.\n");
        return 1;
    }

    printf("Enter %d values:\n", n);

    // Read n values and add to sum
    for(int i = 1; i <= n; i++) {
        printf("Enter value %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    // Calculate mean
    float mean = sum / (float)n;

    // Print results
    printf("\nSum of the %d values: %.2f\n", n, sum);
    printf("Mean of the %d values: %.2f\n", n, mean);

    return 0;
}
