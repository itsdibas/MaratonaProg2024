#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int *a = (int*)malloc(n * sizeof(int));
        int posMin = -1, posMax = -1;
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if(a[i] == 1) {
                posMin = i; 
            }
            if(a[i] == n) {
                posMax = i; 
            }
        }

        int strategy1 = (posMin > posMax ? posMin : posMax) + 1;
        int strategy2 = ( (n - posMin) > (n - posMax) ? (n - posMin) : (n - posMax) );
        int strategy3 = ( (posMin < posMax ? posMin : posMax) + 1 ) + ( n - (posMin < posMax ? posMax : posMin) );
        
        int ans = strategy1;
        if(strategy2 < ans) ans = strategy2;
        if(strategy3 < ans) ans = strategy3;
        
        printf("%d\n", ans);
        free(a);
    }
    return 0;
}
