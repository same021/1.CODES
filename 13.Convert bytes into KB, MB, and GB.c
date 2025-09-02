#include <stdio.h>
int main() {
    unsigned long long bytes;
    double kb, mb, gb;
    printf("Enter size in bytes: ");
    scanf("%llu", &bytes);
    kb = bytes / 1024.0;
    mb = bytes / (1024.0 * 1024.0);
    gb = bytes / (1024.0 * 1024.0 * 1024.0);
    printf("%llu bytes = %.2f KB\n", bytes, kb);
    printf("%llu bytes = %.2f MB\n", bytes, mb);
    printf("%llu bytes = %.2f GB\n", bytes, gb);
    return 0;
}
