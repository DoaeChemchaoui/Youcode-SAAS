#include <stdio.h>

int fibonacci(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    int t0 = 0, t1 = 1, t;
    for(int i=2; i<=n; i++) {
        t = t0 + t1;
        t0 = t1;
        t1 = t;
    }
    return t1;
}

int main() {
    int n;
    printf("Entrez le rang du terme de Fibonacci : ");
    scanf("%d", &n);

    printf("F(%d) = %d\n", n, fibonacci(n));
    return 0;
}
