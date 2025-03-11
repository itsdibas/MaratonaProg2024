#include <stdio.h>

int main() {
    long long n, total = 0, sum = 0, num;
    int i;
    
    // Lê o valor de n
    scanf("%lld", &n);
    
    // Calcula a soma total dos números de 1 a n usando a fórmula da soma de uma PA
    total = n * (n + 1) / 2;
    
    // Lê os n-1 números e acumula sua soma
    for(i = 0; i < n - 1; i++){
        scanf("%lld", &num);
        sum += num;
    }
    
    // A diferença entre a soma total e a soma dos números lidos é o número que está faltando
    printf("%lld\n", total - sum);
    
    return 0;
}
