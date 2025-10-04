#include <stdio.h>

int main() {
    int values[10];
    int i;

    // Accept 10 values
    printf("Enter 10 integer values:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &values[i]);
    }

    // Print the 4th, 7th, and 9th values
    printf("4th value: %d\n", values[3]);  // Index 3 is the 4th element
    printf("7th value: %d\n", values[6]);  // Index 6 is the 7th element
    printf("9th value: %d\n", values[8]);  // Index 8 is the 9th element

    return 0;
}
