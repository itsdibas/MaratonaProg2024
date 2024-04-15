#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int p,r;

    scanf("%d", &p);
    scanf("%d", &r);
    
    if(p==0){
        printf("C");
    }
    else if(r==0){
        printf("B");
    }
    else{
        printf("A");
    }

    return 0;
}
