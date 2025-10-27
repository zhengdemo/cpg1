#include <stdio.h>
void main(){
    int n, max=-1;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]>max) max = arr[i];
    }
    max+=1;
    int hot[n][max];
    for(int i=0; i<n; i++){
        for(int j=0; j<max; j++){
            hot[i][j] = 0;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<max; j++){
            if(arr[i]==j){
                printf("1 ");
            }
            else printf("%d ", hot[i][j]);
        }
        printf("\n");
    }
}
