#include <stdio.h>
void main(){
    int n, target, c=0;
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &target);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]==target){
                printf("%d %d\n", i, j);
                c++;
            }
        }
    }
    if(!c){
        printf("No");
    }
}
