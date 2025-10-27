#include <stdio.h>
void main(){
    int m, n, k;
    scanf("%d%d", &m, &n);
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &k);
    for(int i=0; i < m; i++){
        for(int j=0; j < n; j++){
            if((i+j) % 2 !=0 ){
                arr[i][j] += k;
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
