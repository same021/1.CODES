#include <stdio.h>
int main() {
    float rupees, dollars;
    const float conversion_rate = 88.14;
    // Input amount in rupees
    printf("Enter amount in Rs: ");
    scanf("%f", &rupees);
    // Convert rupees to dollars
    dollars = rupees / conversion_rate;
    // Display the result
    printf("%.2f Rs is equal to %.2f dollars.\n", rupees, dollars);
    return 0;
}
