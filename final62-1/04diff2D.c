#include <stdio.h>
void main(){
    int r, c, k;
    scanf("%d%d", &r, &c);
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &k);
    if(k==1){
        for(int i=0; i<r; i++){
            int sum=0;
            for(int j=1; j<c; j++){
                sum=arr[i][j]-arr[i][j-1];
                printf("%d ", sum);
            }
        printf("\n");
        }
    }
    if(k==2){
        for(int i=0; i<r-1; i++){
            int sum=0;
            for(int j=0; j<c; j++){
                sum=arr[i+1][j]-arr[i][j];
                printf("%d ", sum);
            }
        printf("\n");
        }
    }
}
