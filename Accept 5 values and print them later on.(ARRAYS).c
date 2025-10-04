#include <stdio.h>

int main() {
    int values[5];
    int i;

    // Accept 5 values
    printf("Enter 5 integer values:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &values[i]);
    }

    // Print the values
    printf("You entered:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");

    return 0;
}
