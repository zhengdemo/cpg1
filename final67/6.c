#include <stdio.h>
void main(){
    int m, n, x, sum=0;
    scanf("%d", &m);
    int pool[m][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &pool[i][j]);
        }
    }
    scanf("%d", &n);
    int size=m/n, avg[size][size];
    for(int i=0; i<m; i+=n){
        for(int j=0; j<m; j+=n){
    sum=0;

           for(int x=i; x<i+n; x++){
            for(int y=j; y<j+n; y++){
                sum+=pool[x][y];
            }

           }
    avg[i/n][j/n] = sum / (n*n);
        }
    }
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("%3d ", avg[i][j]);
        }
        printf("\n");
    }
}
