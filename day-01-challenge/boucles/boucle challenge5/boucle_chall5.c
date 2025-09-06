#include <stdio.h>

int main() {
    int base, exp, i;
    unsigned long long res = 1;
    scanf("%d %d", &base, &exp);

    for (i = 1; i <= exp; i++) {
        res *= base;
    }

    printf("%d^%d = %llu\n", base, exp, res);
    return 0;
}
