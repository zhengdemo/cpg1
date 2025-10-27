#include <stdio.h>
void main(){
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            arr[i][j] = 1;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){

        }

    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            printf("%d ", arr[i][j]) ;
        }
        printf("\n");
    }
}
