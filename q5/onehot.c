#include <stdio.h>
void main(){
    int n, x;
    scanf("%d", &n);
    int arr[n ][10];
    for(int i=0; i<n; i++){
        for(int j=0; j<10; j++){
            arr[i][j] = 0;
        }
    }
    for(int k=0; k<n; k++){
        scanf("%d", &x);
                arr[k][x] = 1;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<10; j++){
            printf("%d ", arr[i][j]);
        }
    printf("\n");
    }
}
