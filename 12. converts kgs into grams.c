#include <stdio.h>
int main() {
    double kilograms, grams;
    printf("Enter weight in kilograms: ");
    scanf("%lf", &kilograms);
    grams = kilograms * 1000.0;
    printf("%.3lf kilograms = %.2lf grams\n", kilograms, grams);
    return 0;
}
