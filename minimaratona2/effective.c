#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // vetor pos[] armazenará a posição de cada elemento
    int pos[100001];
    
    for (int i = 1; i <= n; i++) {
        int num;
        scanf("%d", &num);
        pos[num] = i;
    }
    
    int m;
    scanf("%d", &m);
    
    long long vasya = 0, petya = 0;
    for (int i = 0; i < m; i++) {
        int query;
        scanf("%d", &query);
        vasya += pos[query];
        petya += (n - pos[query] + 1);
    }
    
    printf("%lld %lld", vasya, petya);
    return 0;
}
