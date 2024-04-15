#include <stdio.h>
#include <stdlib.h>

int main(){
    int vasya, petya, tonya, n, concordancia;

    concordancia=0;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d %d", &vasya, &petya, &tonya);
        if(vasya+petya+tonya>=2){
            concordancia++;
        }
    }

    printf("%d", concordancia);
    return 0;
}