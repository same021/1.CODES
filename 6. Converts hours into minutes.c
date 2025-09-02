#include <stdio.h>
int main() {
    int hours, minutes;
    // Input hours
    printf("Enter hours: ");
    scanf("%d", &hours);
    // Convert hours to minutes
    minutes = hours * 60;
    // Display the result
    printf("%d hour(s) is equal to %d minute(s).\n", hours, minutes);
    return 0;
}
