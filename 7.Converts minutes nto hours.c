#include <stdio.h>
int main() {
    int total_minutes, hours, minutes;
    // Input total minutes
    printf("Enter minutes: ");
    scanf("%d", &total_minutes);
    // Convert minutes to hours and remaining minutes
    hours = total_minutes / 60;
    minutes = total_minutes % 60;
    // Display the result
    printf("%d minute(s) is equal to %d hour(s) and %d minute(s).\n", total_minutes, hours, minutes);
    return 0;
}
