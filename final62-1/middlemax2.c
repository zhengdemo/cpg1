#include <stdio.h>
void main(){
    int max=-9999999, min=9999999999, n, a, b, c, count=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
    scanf("%d%d%d", &a, &b, &c);
    if(b<a&&b<c){
        printf("min %d ", b);
    }
    if(b>a&&b>c){
        printf("max %d ", b);
    }
    while(1){
        a=b;
        b=c;
        scanf("%d", &c);
        if(c==0) break;
            if(b<a&&b<c){
                printf("min %d ", b);
            }
            if(b>a&&b>c){
                printf("max %d ", b);
            }
        }printf("\n");
    }
}
