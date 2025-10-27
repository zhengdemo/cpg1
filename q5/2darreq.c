#include <stdio.h>
void main(){
    int n, r, c, count=0, min=9999, max=-99999;
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
            count++;
            if(arr[i][j]>max){
                max = arr[i][j];
            }
            if(arr[i][j]<min){
                min = arr[i][j];
            }
        }
        printf("\n");
    }
    printf("%d\n%d\n%d", count, max, min);
}
