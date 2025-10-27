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
        }
    }
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            sum+=arr[i][j];
        }
        if(sum>maxrow){
            maxrow = sum;
        }
    }
    if(maxrow>=maxcol){
        printf("max %d\n", maxrow);
    }
    else{
        printf("max %d\n", maxcol);
    }
    if(maxrow>=maxcol){
        printf("row ");
        for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            sum+=arr[i][j];
        }
        if(sum==maxrow){
            printf("%d ", i+1);
        }
        }
    }
    printf("\n");
    if(maxcol>=maxrow){
        printf("col ");
        for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            sum+=arr[j][i];
        }
        if(sum==maxcol){
            printf("%d ", i+1);
        }
        }
    }
}
