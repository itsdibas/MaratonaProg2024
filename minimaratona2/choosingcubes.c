#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a); // Ordena em ordem decrescente
}

void solve() {
    int n, f, k;
    scanf("%d %d %d", &n, &f, &k);
    
    int a[n], sorted[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sorted[i] = a[i];
    }
    
    int fav_value = a[f - 1]; // Valor do cubo favorito
    qsort(sorted, n, sizeof(int), compare);
    
    int count_fav = 0;
    for (int i = 0; i < n; i++) {
        if (sorted[i] == fav_value) count_fav++;
    }
    
    int removed_fav = 0;
    for (int i = 0; i < k; i++) {
        if (sorted[i] == fav_value) removed_fav++;
    }
    
    if (removed_fav == count_fav) {
        printf("YES\n");
    } else if (removed_fav == 0) {
        printf("NO\n");
    } else {
        printf("MAYBE\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
