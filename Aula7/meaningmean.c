#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    long long int aa = *(const long long int *)a;
    long long int bb = *(const long long int *)b;
    if(aa < bb) return -1;
    else if(aa > bb) return 1;
    else return 0;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        long long int a[60];  
        for (int i = 0; i < n; i++){
            scanf("%lld", &a[i]);
        }

        qsort(a, n, sizeof(long long int), cmp);
        

        long long int ans = a[0];
        for (int i = 1; i < n; i++){
            ans = (ans + a[i]) / 2;
        }
        
        printf("%lld\n", ans);
    }
    return 0;
}
