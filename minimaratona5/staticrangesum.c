#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, q;
    scanf("%d %d", &n, &q);
    
    // Aloca o vetor de prefix sum com n+1 elementos (prefix[0] = 0)
    long long *prefix = (long long *) malloc((n + 1) * sizeof(long long));
    prefix[0] = 0;
    
    // Leitura dos valores e construção do vetor de prefix sum
    for (int i = 1; i <= n; i++) {
        long long x;
        scanf("%lld", &x);
        prefix[i] = prefix[i - 1] + x;
    }
    
    // Processamento das queries
    for (int i = 0; i < q; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        // O resultado é a diferença entre prefix[b] e prefix[a-1]
        printf("%lld\n", prefix[b] - prefix[a - 1]);
    }
    
    free(prefix);
    return 0;
}
