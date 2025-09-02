#include <stdio.h>
int main() {
    double celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = (9.0 / 5.0) * celsius + 32;
    printf("%.2lf Celsius = %.2lf Fahrenheit\n", celsius, fahrenheit);
    return 0;
}
