#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while(t--) {
        char w[15];  // Tamanho suficiente, já que o máximo é 10 caracteres
        scanf("%s", w);
        
        int len = strlen(w);
        // Substitui o final "us" por um terminador de string, removendo "us"
        w[len - 2] = '\0';
        // Imprime o restante (raiz) concatenado com "i"
        printf("%si\n", w);
    }
    
    return 0;
}
