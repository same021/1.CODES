#include <stdio.h>

int main() {
    int sexCode, boys = 0, girls = 0;

    printf("Enter sex code for 50 students (1 for boy, 2 for girl):\n");

    for(int i = 1; i <= 50; i++) {
        printf("Enter sex code for student %d: ", i);
        scanf("%d", &sexCode);

        if(sexCode == 1) {
            boys++;
        } else if(sexCode == 2) {
            girls++;
        }
        // Assuming valid inputs; invalid codes are ignored
    }

    printf("\nNumber of boys: %d\n", boys);
    printf("Number of girls: %d\n", girls);

    return 0;
}
