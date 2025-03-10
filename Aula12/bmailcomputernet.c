#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int *p = (int *)malloc((n + 1) * sizeof(int));
    
    for (int i = 2; i <= n; i++) {
        scanf("%d", &p[i]);
    }
    
    int *path = (int *)malloc((n + 1) * sizeof(int));
    int length = 0;
    int current = n;
    
    while (1) {
        path[length++] = current;
        if (current == 1) break;
        current = p[current];
    }
    
    for (int i = length - 1; i >= 0; i--) {
        printf("%d ", path[i]);
    }
    printf("\n");
    
    free(p);
    free(path);
    
    return 0;
}
