#include <stdio.h>
int main() {
    double grams, kilograms;
    printf("Enter weight in grams: ");
    scanf("%lf", &grams);
    kilograms = grams / 1000.0;
    printf("%.2lf grams = %.3lf kilograms\n", grams, kilograms);
    return 0;
}
