#include <stdio.h>
void main(){
    int n, x, c=0;
    float rate=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        arr[i] = 0;
    }
    while(1){
        scanf("%d", &x);
        if(x==0) break;
        arr[x-1]+=1;
        c++;
    }
    for(int i=0; i<n; i++){
//        printf("check %d\n", arr[i]);
        rate = (arr[i]/(float)(c))*100;
        printf("%.2f%%\n", rate);
    }
}
