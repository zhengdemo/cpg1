#include <stdio.h>
void main(){
    int n, maxrow=-99, maxcol=-99, cl, rl;
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            sum+=arr[j][i];
        }
        if(sum>maxcol){
           maxcol = sum;
           cl = i;
        }
    }
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            sum+=arr[i][j];
        }
        if(sum>maxrow){
            maxrow = sum;
            rl = i;
        }
    }
//    printf("%d %d", maxcol, maxrow);
    if(maxrow>=maxcol){
        printf("max %d row %d", maxrow, rl+1);
    }
    if(maxcol>maxrow){
        printf("max %d col %d", maxcol, cl+1);
    }
}
