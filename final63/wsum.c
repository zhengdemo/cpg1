#include <stdio.h>
void main(){
    int n, w, x;
    scanf("%d%d", &n, &w);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<(n-w)+1; i++){
        int sum=0;
        for(int j=i; j<w+i; j++){
            sum+=arr[j];
        }
    printf("%d ", sum);
    }
}
