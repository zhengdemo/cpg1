#include <stdio.h>
void main(){
    int n;
    scanf("%d", &n);
    char e[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            e[i][j] = ' ';
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==(n*1)/3){
                e[i][j] = '#';
                e[j][i] = '#';
            }
            if(i==(n*2)/3){
                e[i][j] = '#';
                e[j][i] = '#';
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%c", e[i][j]);
        }
        printf("\n");
    }
}
