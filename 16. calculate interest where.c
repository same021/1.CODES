#include <stdio.h>
int main() {
    double principal, rate, time, interest;
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter rate of interest (in %%): ");
    scanf("%lf", &rate);
    printf("Enter time period (in years): ");
    scanf("%lf", &time);
    interest = (principal * rate * time) / 100.0;
    printf("Simple Interest = %.2lf\n", interest);
    return 0;
}2
