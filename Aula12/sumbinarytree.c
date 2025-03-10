#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        unsigned long long n, sum = 0;
        scanf("%llu", &n);
        while (n > 0) {
            sum += n;
            n /= 2;
        }
        printf("%llu\n", sum);
    }
    return 0;
}
