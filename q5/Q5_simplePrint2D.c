#include <stdio.h>
void main(){
    int n, k;
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d ", &arr[i][j]);
        }
    }
    scanf("%d", &k);
    if(k>0 && k%2==0){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }
    if(k>0 && k%2!=0){
        for(int i=n-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }
    if(k<0 && k%2==0){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                printf("%d ", arr[j][i]);
            }
            printf("\n");
        }
    }
    if(k<0 && k%2!=0){
        for(int i=n-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                printf("%d ", arr[j][i]);
            }
            printf("\n");
        }
    }
    if(k==0){
        printf("Error");
    }
}
