#include <stdio.h>
void main(){
    double exp=1;
    int n;
    scanf("%d", &n);
    int x = n;
    while(x>0){
        printf("%d x %.0f\n", x%10, exp);
        x/=10;
        exp*=10;
    }
}
