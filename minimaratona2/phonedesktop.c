#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int x, y;
        scanf("%d %d", &x, &y);
        
        
        int candidate1 = (x + 4 * y + 14) / 15; 
        int candidate2 = (y + 1) / 2;         
        int ans = candidate1 > candidate2 ? candidate1 : candidate2;
        
        printf("%d\n", ans);
    }
    
    return 0;
}
