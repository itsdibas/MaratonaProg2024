#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        char s[60]; // n <= 50, espaço extra para o terminador '\0'
        scanf("%s", s);
        
        int count[7] = {0}; // Índices 0 a 6 correspondem às letras 'A' a 'G'
        int len = strlen(s);
        for (int i = 0; i < len; i++) {
            count[s[i] - 'A']++;
        }
        
        int ans = 0;
        // Para cada dificuldade, calcular quantos problemas a mais são necessários
        for (int i = 0; i < 7; i++) {
            if (count[i] < m) {
                ans += m - count[i];
            }
        }
        
        printf("%d\n", ans);
    }
    return 0;
}
