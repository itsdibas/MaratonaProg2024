#include <stdio.h>

int main() {
    int t, n, m;
    scanf("%d", &t);
    
    while(t--) {
        scanf("%d %d", &n, &m);
        // Para que seja possível, é necessário que n seja maior ou igual a m 
        // e que a soma (n+m) seja par, pois isso garante que:
        // x = (n+m)/2 (número de adições) e y = (n-m)/2 (número de remoções) sejam inteiros.
        if(n >= m && ((n + m) % 2 == 0))
            printf("Yes\n");
        else
            printf("No\n");
    }
    
    return 0;
}
