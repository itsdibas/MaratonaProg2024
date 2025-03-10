#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int p1, p2, p3;
        scanf("%d %d %d", &p1, &p2, &p3);
        
        int sum = p1 + p2 + p3;
        if(sum % 2 != 0){
            printf("-1\n");
            continue;
        }
        
        int T = sum / 2; 
        

        if(p3 <= T)
            printf("%d\n", T);
        else
            printf("%d\n", p1 + p2);
    }
    return 0;
}
