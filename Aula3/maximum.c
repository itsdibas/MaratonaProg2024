#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long table[10][10] = {0};

    for (int i = 0; i < n; i++) {
        table[i][0] = 1;
        table[0][i] = 1;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            table[i][j] = table[i - 1][j] + table[i][j - 1];
        }
    }

    printf("%lld\n", table[n - 1][n - 1]);

    return 0;
}