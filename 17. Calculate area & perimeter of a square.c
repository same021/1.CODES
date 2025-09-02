#include <stdio.h>
int main() {
    float L, area, perimeter;
    // Input the length of the square's side
    printf("Enter the length of the square's side: ");
    scanf("%f", &L);
    // Calculate area and perimeter
    area = L * L;
    perimeter = 4 * L;
    // Display the results
    printf("Area of the square = %.2f\n", area);
    printf("Perimeter of the square = %.2f\n", perimeter);
    return 0;
}
