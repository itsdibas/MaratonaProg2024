#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n;
    scanf("%lld", &n);
    
    // Calcula a soma total de 1 a n
    long long total = n * (n + 1LL) / 2;
    
    // Se a soma total for ímpar, não há como particionar
    if(total % 2 != 0) {
        printf("NO\n");
        return 0;
    }
    
    printf("YES\n");
    
    long long half = total / 2;
    // Vetor para marcar os números que vão para o primeiro conjunto (1) ou não (0)
    int *subset = (int *) malloc((n + 1) * sizeof(int));
    if(subset == NULL) {
        return 1;
    }
    
    // Inicializa o vetor
    for (int i = 0; i <= n; i++) {
        subset[i] = 0;
    }
    
    // Seleciona os números para o primeiro conjunto de forma gananciosa
    for (int i = n; i >= 1; i--) {
        if(i <= half) {
            subset[i] = 1;
            half -= i;
        }
    }
    
    // Conta os elementos dos conjuntos
    int count1 = 0, count2 = 0;
    for (int i = 1; i <= n; i++) {
        if (subset[i])
            count1++;
        else
            count2++;
    }
    
    // Imprime o primeiro conjunto
    printf("%d\n", count1);
    for (int i = 1; i <= n; i++) {
        if (subset[i])
            printf("%d ", i);
    }
    printf("\n");
    
    // Imprime o segundo conjunto
    printf("%d\n", count2);
    for (int i = 1; i <= n; i++) {
        if (!subset[i])
            printf("%d ", i);
    }
    printf("\n");
    
    free(subset);
    return 0;
}
