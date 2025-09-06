#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;
    scanf("%d", &n);

    if (n < 0) return 1;

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("%d! = %llu\n", n, fact);
    return 0;
}
