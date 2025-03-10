#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    long long arg1 = *(const long long *)a;
    long long arg2 = *(const long long *)b;
    if(arg1 < arg2)
        return -1;
    else if(arg1 > arg2)
        return 1;
    else
        return 0;
}

int main(){
    int n;
    scanf("%d", &n);

    long long *v = (long long *)malloc(n * sizeof(long long));
    for (int i = 0; i < n; i++){
        scanf("%lld", &v[i]);
    }

    long long *prefix1 = (long long *)malloc((n + 1) * sizeof(long long));
    prefix1[0] = 0;
    for (int i = 1; i <= n; i++){
        prefix1[i] = prefix1[i - 1] + v[i - 1];
    }

    long long *sorted = (long long *)malloc(n * sizeof(long long));
    for (int i = 0; i < n; i++){
        sorted[i] = v[i];
    }
    qsort(sorted, n, sizeof(long long), cmp);

    long long *prefix2 = (long long *)malloc((n + 1) * sizeof(long long));
    prefix2[0] = 0;
    for (int i = 1; i <= n; i++){
        prefix2[i] = prefix2[i - 1] + sorted[i - 1];
    }

    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++){
        int type, l, r;
        scanf("%d %d %d", &type, &l, &r);
        if(type == 1){
            printf("%lld\n", prefix1[r] - prefix1[l - 1]);
        } else {
            printf("%lld\n", prefix2[r] - prefix2[l - 1]);
        }
    }

    free(v);
    free(sorted);
    free(prefix1);
    free(prefix2);

    return 0;
}
