#include <stdio.h>
void main(){
    int n, s, max, x;
    scanf("%d", &n);
    int arr[n];
    float score[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d%d", &max, &x);
    for(int i=0; i<n; i++){
        score[i] = ((arr[i]*1.00)*x)/max;
    }
    for(int i=0; i<n; i++){
        printf("%.1f ", score[i]);
    }
}
