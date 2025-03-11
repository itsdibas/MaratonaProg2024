#include <stdio.h>
#include <stdlib.h>

int sumDigits(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main(){
    int N;
    long long K;
    scanf("%d %lld", &N, &K);
    
    const int MAXVAL = 1000000;
    long long *cnt = (long long*)calloc(MAXVAL+1, sizeof(long long));
    int current_max = 0;
    
    for (int i = 0; i < N; i++){
        int f;
        scanf("%d", &f);
        cnt[f]++;
        if(f > current_max)
            current_max = f;
    }
    
    int answer = 0;
    while(1){
        while(current_max > 0 && cnt[current_max] == 0)
            current_max--;
        
        if(current_max == 0){
            answer = 0;
            break;
        }
        
        long long batch = cnt[current_max];
        if(K <= batch){
            answer = sumDigits(current_max);
            break;
        }
        K -= batch;
        cnt[current_max] = 0;
        int newVal = current_max - sumDigits(current_max);
        cnt[newVal] += batch;
    }
    
    printf("%d\n", answer);
    free(cnt);
    return 0;
}
