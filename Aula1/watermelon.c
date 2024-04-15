#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int weightMelon;

    scanf("%d", &weightMelon);

    if(weightMelon!=2){
         if(weightMelon%2==0){
                printf("YES");
         }
         else{
             printf("NO");
          }
    }
    else{
        printf("NO");
    }
    
    return 0;
}
