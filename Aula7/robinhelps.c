#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int a[50];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int robin_gold = 0;
        int give_count = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] >= k) {
                robin_gold += a[i];
            } else if (a[i] == 0 && robin_gold > 0) {
                robin_gold--;
                give_count++;
            }
        }

        printf("%d\n", give_count);
    }

    return 0;
}