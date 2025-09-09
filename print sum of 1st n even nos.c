#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 2; i <= 2*n; i += 2) {
        sum += i;
    }

    printf("Sum of first %d even natural numbers is %d\n", n, sum);

    return 0;
}
