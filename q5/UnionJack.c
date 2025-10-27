#include <stdio.h>
void main(){
    int n, k=-2;
    scanf("%d", &n);
    char flag[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            flag[i][j] = ' ';
        }
    }
    //border
    for(int i=0; i<n; i++){
        flag[i][0] = '*';
        flag[0][i] = '*';
        flag[n-1][i] = '*';
        flag[i][n-1] = '*';
        for(int j=0; j<n; j++){
            if(i >= (n-5)/2 && i < ((n-5)/2)+5){
            flag[i][j] = '*';
            flag[j][i] = '*';
            }
        }
    }
    for(int i=0; i<n; i++){
            flag[i][i-1] = '*';
            flag[i][i] = '*';
            flag[i][i+1] = '*';
            flag[i][(n-i)-2] = '*';
            flag[i][(n-i)-1] = '*';
            flag[i][(n-i)] = '*';
    }
    //print
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%c", flag[i][j]);
        }
        printf("\n");
    }
}
