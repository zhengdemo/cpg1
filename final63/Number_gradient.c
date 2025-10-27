#include <stdio.h>
void main(){
    int n;
    scanf("%d", &n);
    if(n<0) n*=-1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(j+1>=10){
                printf("%d ", (j+1)%10);
            }
            else{
                printf("%d ", j+1);
            }
        }
        for(int j=i; j<n; j++){
            if(i+1>=10){
                printf("%d ", (i+1)%10);
            }
            else{
                printf("%d ", i+1);
            }
        }
    printf("\n");
    }
}
