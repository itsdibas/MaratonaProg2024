#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[50];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        qsort(a, n, sizeof(int), compare);

        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] < 0) {
                a[i] = -a[i];
            }
            sum += a[i];
        }

        printf("%d\n", sum);
    }

    return 0;
}