#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int n, a, maiornumero;
    n=1;
    maiornumero=0;

    while(n!=0){
        scanf("%d", &a);
        if(a==0){
            n=0;
            break;
        }
        else{
            if(a>maiornumero){
                maiornumero=a;
            }
        }
    }
    printf("%d", maiornumero);
}
