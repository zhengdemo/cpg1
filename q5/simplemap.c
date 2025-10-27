#include <stdio.h>
void main(){
    int r, c, sr, sc, n, x=1;
    scanf("%d%d", &r, &c);
    int map[r][c];
    scanf("%d", &n);
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            map[i][j]=0;
        }
    }
    for(int i = 0; i<n; i++){
        scanf("%d%d", &sr, &sc);
        map[sr-1][sc-1] = x;
        x++;
    }
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }
}
