#include <stdio.h>
void main(){
    int c, x=0;
    scanf("%d", &c);
    if(c<0) printf("None");
    else{
    char ka[10][c];
    //เคลียร์ค่า ให้เป็น -
    for(int i=0; i<10; i++){
        for(int j=0; j<c; j++){
            ka[i][j] = '-';
        }
    }
    for(int i=0; i<4; i++){
        //row จะมีค่าไม่เกิน 3
        //i = 0 row = 3 |i = 1 row = 2 | i = 2 row = 1 | i = 3 row = 0
        int row = 3 - i;
        for(int j=0; j<c; j++){
            // col จะมีค่า 0 - 4
            //0 % 5 = 0 | 1 % 5 = 1 | 2 % 5 = 2 | 3 % 5 = 3 | 4 % 5 = 4 | 5 % 5 = 0
            int col = j % 5;
    //row == col เพราะรอบแรกตอนที่ row เป็น 3
            if(row == col){
                ka[i][j] = '/';
                ka[10 - 1 - i][j] = '\\';
            }
            else if(col == 4){
                ka[i][j] = '|';
                ka[10 - 1 -i][j] = '|';
            }

        }
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<c; j++){
            printf("%c", ka[i][j]);
        }
        printf("\n");
        }
    }
}
