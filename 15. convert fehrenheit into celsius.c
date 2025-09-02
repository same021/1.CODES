#include <stdio.h>
int main() {
    double fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    celsius = (5.0 / 9.0) * (fahrenheit - 32);
    printf("%.2lf Fahrenheit = %.2lf Celsius\n", fahrenheit, celsius);
    return 0;
}
