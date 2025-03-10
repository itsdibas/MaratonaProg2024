#include <stdio.h>
#include <string.h>
#define NEG -100000000

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n;
        scanf("%d", &n);
        char path[60];
        scanf("%s", path);
        
        int dp[60];
        for(int i = 0; i < n; i++){
            dp[i] = NEG;
        }
        dp[0] = 0;
        
        for(int i = 1; i < n; i++){
            if(path[i] == '*'){
                continue;
            }
            int coin = (path[i] == '@') ? 1 : 0;
            int best = NEG;
            if(i - 1 >= 0 && dp[i - 1] != NEG){
                if(dp[i - 1] > best)
                    best = dp[i - 1];
            }
            if(i - 2 >= 0 && dp[i - 2] != NEG){
                if(dp[i - 2] > best)
                    best = dp[i - 2];
            }
            if(best != NEG)
                dp[i] = best + coin;
        }
        
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(dp[i] > ans)
                ans = dp[i];
        }
        printf("%d\n", ans);
    }
    
    return 0;
}
