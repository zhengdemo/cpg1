#include <stdio.h>
void main(){
    int m, n, x, sum=0, pass=0, k=0, sumall=0;
    float avg;
    scanf("%d%d", &m, &n);
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<m; i++){
            sum=0;
        for(int j=0; j<n; j++){
            printf("%d ", arr[j][i]);
            sum+=arr[j][i];
        }
            sumall += sum;
            printf("%d\n", sum);
    }
    avg = sumall / (float)m;
    printf("average = %.2f\n", avg);
    for(int i=0; i<m; i++){
            sum=0;
        for(int j=0; j<n; j++){
            sum+=arr[j][i];
        }
//            printf("%d/n",sum);
            if(sum>=avg){
                pass+=1;
            }
    }
    printf("pass %d\n", pass);
    for(int i=0; i<m; i++){
            sum=0;
        for(int j=0; j<n; j++){
            sum+=arr[j][i];
        }
        if(sum>=avg){
            printf("%d ", i+1);
        }
    }
}
