#include <stdio.h>
#include <stdbool.h>
#define MAXN 50

int main(){
    int N;
    scanf("%d", &N);
    int matrix[MAXN][MAXN];
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int cur[MAXN][MAXN];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cur[i][j] = matrix[i][j];
        }
    }
    
    int rotations = -1; 
    int temp[MAXN][MAXN];
    

    for (int r = 0; r < 4; r++){
        bool ok = true;
        
      
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N - 1; j++){
                if(cur[i][j] >= cur[i][j + 1]){
                    ok = false;
                    break;
                }
            }
            if(!ok)
                break;
        }
        

        if(ok){
            for (int j = 0; j < N; j++){
                for (int i = 0; i < N - 1; i++){
                    if(cur[i][j] >= cur[i + 1][j]){
                        ok = false;
                        break;
                    }
                }
                if(!ok)
                    break;
            }
        }
        

        if(ok){
            rotations = r;
            break;
        }
        

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                temp[i][j] = cur[j][N - 1 - i];
            }
        }

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                cur[i][j] = temp[i][j];
            }
        }
    }
    
    printf("%d\n", rotations);
    return 0;
}
