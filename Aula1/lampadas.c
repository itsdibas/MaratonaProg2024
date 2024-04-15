#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int A, B, n, entrada;

    A=0;
    B=0;

    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d", &entrada);
        if(entrada==1){
            if(A==0){
                A=1;
            }
            else{
                A=0;
            }
        }
        else{
            if(A==1){
                A=0;
            }
            else{
                A=1;
            }
            if(B==1){
                B=0;
            }
            else{
                B=1;
            }
        }
    }

    printf("%d\n", A);
    printf("%d", B);

    return 0;
}
