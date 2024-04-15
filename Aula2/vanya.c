#include <stdio.h>
#include <stdlib.h>

int main(){  
    int nAmigos, altura, alturaDoBrother, alturaTotal;

    alturaTotal=0;
    
    scanf("%d", &nAmigos);
    scanf("%d", &altura);

    for(int i=0; i<nAmigos; i++){
        scanf("%d", &alturaDoBrother);
        if(alturaDoBrother>altura){
            alturaTotal=alturaTotal+2;
        }else{
            alturaTotal++;
        }
    }

    printf("%d", alturaTotal);

    return 0;
}