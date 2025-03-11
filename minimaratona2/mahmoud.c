#include <stdio.h>
#include <string.h>

int longestUncommonSubsequence(char *a, char *b) {
    // Se as strings são iguais, não há subsequência incomum
    if (strcmp(a, b) == 0) {
        return -1;
    }
    // Caso contrário, o maior comprimento entre as duas é a resposta
    return (strlen(a) > strlen(b)) ? strlen(a) : strlen(b);
}

int main() {
    char a[100005], b[100005];
    
    // Leitura das duas strings
    scanf("%s", a);
    scanf("%s", b);
    
    // Cálculo e saída do resultado
    printf("%d\n", longestUncommonSubsequence(a, b));
    
    return 0;
}
