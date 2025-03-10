#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int h[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &h[i]);
    }
    
    long long soma = 0;
    for (int i = 0; i < k; i++) {
        soma += h[i];
    }
    
    long long somaMin = soma;
    int idx = 0;
    
    for (int i = k; i < n; i++) {
        soma = soma - h[i - k] + h[i];
        if (soma < somaMin) {
            somaMin = soma;
            idx = i - k + 1;
        }
    }
    
    printf("%d\n", idx + 1);
    
    return 0;
}
