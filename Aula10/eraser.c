#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);
        char s[n+1];
        scanf("%s", s);
        
        int ans = 0, i = 0;
        while(i < n){
            if(s[i] == 'B'){
                ans++;
                int pos;

                if(i <= n - k)
                    pos = i;
                else
                    pos = n - k;
                int cover_end = pos + k - 1;
                while(i <= cover_end && i < n)
                    i++;
            } else {
                i++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
