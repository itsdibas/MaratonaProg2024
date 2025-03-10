#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        char s[1005];
        scanf("%s", s);
        int n = strlen(s);
        
        int ones_total = 0, zeros_total = 0;
        for (int i = 0; i < n; i++) {
            if(s[i] == '1')
                ones_total++;
            else
                zeros_total++;
        }
        

        
        int cost_all0 = ones_total;  
        int cost_all1 = zeros_total; 
        int best = cost_all0 < cost_all1 ? cost_all0 : cost_all1;
        

        int prefix_ones[1005] = {0};
        int prefix_zeros[1005] = {0};
        for (int i = 0; i < n; i++) {
            prefix_ones[i+1] = prefix_ones[i] + (s[i] == '1');
            prefix_zeros[i+1] = prefix_zeros[i] + (s[i] == '0');
        }
        

        for (int k = 1; k < n; k++) {
            int cost0then1 = prefix_ones[k] + (prefix_zeros[n] - prefix_zeros[k]);
            int cost1then0 = prefix_zeros[k] + (prefix_ones[n] - prefix_ones[k]);
            if(cost0then1 < best)
                best = cost0then1;
            if(cost1then0 < best)
                best = cost1then0;
        }
        
        printf("%d\n", best);
    }
    return 0;
}
