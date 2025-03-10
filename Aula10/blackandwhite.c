#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while(t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        
        char s[200005];
        scanf("%s", s);
        
        int count = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'W') {
                count++;
            }
        }
        
        int best = count;
        
        for (int i = k; i < n; i++) {
            if (s[i] == 'W') {
                count++; 
            }
            if (s[i - k] == 'W') {
                count--;  
            }
            if (count < best) {
                best = count;
            }
        }
        
        printf("%d\n", best);
    }
    
    return 0;
}
