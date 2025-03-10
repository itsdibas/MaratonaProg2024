#include <stdio.h>
#include <stdlib.h>

int cmp_int(const void *a, const void *b) {
    int x = *(const int*)a;
    int y = *(const int*)b;
    return (x > y) - (x < y);
}

int cmp_ll(const void *a, const void *b) {
    long long x = *(const long long*)a;
    long long y = *(const long long*)b;
    return (x > y) - (x < y);
}

int main(){
    int n, q;
    scanf("%d %d", &n, &q);

    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    long long *freq = (long long *)calloc(n + 1, sizeof(long long));
    for (int i = 0; i < q; i++){
        int l, r;
        scanf("%d %d", &l, &r);
        freq[l - 1] += 1;
        if (r < n)
            freq[r] -= 1;
    }

    for (int i = 1; i < n; i++){
        freq[i] += freq[i - 1];
    }

    qsort(arr, n, sizeof(int), cmp_int);
    qsort(freq, n, sizeof(long long), cmp_ll);

    long long ans = 0;
    for (int i = 0; i < n; i++){
        ans += (long long) arr[i] * freq[i];
    }
    
    printf("%lld\n", ans);

    free(arr);
    free(freq);
    return 0;
}
