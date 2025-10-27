#include <stdio.h>
#include <math.h>
void main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int sum_a = abs(a-b);
    int sum_b = abs(a-c);
    int sum_c = abs(b-c);
    if(sum_a<sum_b&&sum_a<sum_c){
        printf("A B");
    }
    if(sum_b<sum_a&&sum_b<sum_c){
        printf("A C");
    }
    if(sum_c<sum_a&&sum_c<sum_b){
        printf("B C");
    }
}
