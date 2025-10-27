#include <stdio.h>
void main(){
    int n, k, sum=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    if(k==1){
        for(int i=1; i<n; i++){
            sum=0;
            sum=(arr[i]-arr[i-1]);
            printf("%d ", sum);
        }
    }
    if(k==2){
            for(int i=n-2; i>=0; i--){
            sum=0;
            sum=(arr[i]-arr[i+1]);
            printf("%d ", sum);
        }
    }
}
