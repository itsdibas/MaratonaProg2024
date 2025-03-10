#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int manager[n + 1];
    for (int i = 1; i <= n; i++) {
        scanf("%d", &manager[i]);
    }
    
    int max_depth = 0;
    
    for (int i = 1; i <= n; i++) {
        int depth = 0;
        int cur = i;
        while (cur != -1) {
            depth++;
            cur = manager[cur];
        }
        if (depth > max_depth) {
            max_depth = depth;
        }
    }
    
    printf("%d\n", max_depth);
    return 0;
}
