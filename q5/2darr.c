#include <stdio.h>
void main(){
    int n, r, c;
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d%d", &r, &c);
    for(int i=0; i<n; i+=r){
        for(int j=0; j<n; j+=c){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
