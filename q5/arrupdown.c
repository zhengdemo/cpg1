#include <stdio.h>
void main(){
    int sumup=0, sumdown=0, k;
    scanf("%d", &k);
    int arr[k][k];
    for(int i=0; i<k; i++){
        for(int j=0; j<k; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<k-1; i++){
        for(int j=i+1; j<k; j++){
            sumup+=arr[i][j];
//            printf("up %d\n", sumup);
        }
    }
    for(int i=1; i<k; i++){
        for(int j=0; j<i; j++){
            sumdown+=arr[i][j];
//            printf("down %d\n", sumdown);
        }
    }
    printf("%d\n%d", sumup, sumdown);
}
