#include <stdio.h>
int main() {
    float dollars, rupees;
    const float conversion_rate = 88.14;
    // Input amount in dollars
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);
    // Convert dollars to rupees
    rupees = dollars * conversion_rate;
    // Display the result
    printf("%.2f dollars is equal to %.2f Rs.\n", dollars, rupees);
    return 0;
}
