#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int p[101], res[101];
    
    for (int i = 1; i <= n; i++) {
        scanf("%d", &p[i]);
    }
    
    // Para cada amigo i, p[i] indica que ele deu um presente para o amigo p[i].
    // Assim, o amigo que recebeu o presente de i é p[i] e, portanto, 
    // o presenteado p[i] recebeu o presente do amigo i.
    for (int i = 1; i <= n; i++) {
        res[p[i]] = i;
    }
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", res[i]);
    }
    
    return 0;
}
