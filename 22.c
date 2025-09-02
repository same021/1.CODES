#include <stdio.h>

int main() {
    float net_sales, gross_sales, discount;
    printf("Enter gross sales: ");
    scanf("%f", &gross_sales);

    discount = gross_sales * 0.1;
    net_sales = gross_sales - discount;

    printf("Net sales after 10%% discount: %.2f\n", net_sales);

    return 0;
}
