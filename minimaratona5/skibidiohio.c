#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while(t--){
        char s[110];
        scanf("%s", s);
        
        int n = strlen(s);
        int foundPair = 0;
        
        // Verifica se existe par de letras iguais consecutivas
        for(int i = 0; i < n - 1; i++){
            if(s[i] == s[i+1]){
                foundPair = 1;
                break;
            }
        }
        
        // Se encontrou pelo menos um par, pode reduzir a 1 letra.
        if(foundPair)
            printf("1\n");
        else
            printf("%d\n", n);
    }
    
    return 0;
}
