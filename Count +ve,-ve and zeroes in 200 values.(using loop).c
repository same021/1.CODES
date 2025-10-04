#include <stdio.h>

int main() {
    int countPositive = 0, countNegative = 0, countZero = 0;
    float num;

    printf("Enter 200 values:\n");

    for(int i = 1; i <= 200; i++) {
        printf("Enter value %d: ", i);
        scanf("%f", &num);

        if(num > 0) {
            countPositive++;
        } else if(num < 0) {
            countNegative++;
        } else {
            countZero++;
        }
    }

    printf("\nCount of positive numbers: %d\n", countPositive);
    printf("Count of negative numbers: %d\n", countNegative);
    printf("Count of zeroes: %d\n", countZero);

    return 0;
}
