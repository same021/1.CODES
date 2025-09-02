#include <stdio.h>
int main() {
    double dollars, pounds;
    const double dollar_to_rs = 88.14;
    const double pound_to_rs = 117.86;
    printf("Enter amount in dollars: ");
    scanf("%lf", &dollars);
    pounds = (dollars * dollar_to_rs) / pound_to_rs;
    printf("%.2lf dollars = %.2lf pounds\n", dollars, pounds);
    return 0;
}
