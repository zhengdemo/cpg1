#include <stdio.h>
void main(){
    double exp=1;
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        exp*=10;
    }
    printf("%.0f", exp);
}
