#include <stdio.h>
void main(){
    int row, col, count=0;
    scanf("%d%d", &row, &col);
    char arr[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            arr[i][j] = ' ';
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<row; j++){
            arr[i][i] = '*';
            arr[(row-1)-i][i] = '*';
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(j == col - row){
                if(arr[i][j+i]=='*' && i!=((row-1)-i)){
                    count++;
                }if(arr[(row-1)-i][j+i] == '*'){
                    count++;
                }
                arr[i][j+i] = '#';
                arr[(row-1)-i][j+i] = '#';
            }
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
    printf("%d", count);
}
