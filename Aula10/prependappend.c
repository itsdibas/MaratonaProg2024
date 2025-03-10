#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char s[2100];
        scanf("%s", s);
        
        int left = 0, right = n - 1;
        while(left < right && s[left] != s[right]){
            left++;
            right--;
        }
        

        int ans = (left > right) ? 0 : (right - left + 1);
        printf("%d\n", ans);
    }
    return 0;
}
