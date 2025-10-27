#include <stdio.h>
void main(){
    int day, mon, year, sum=0, sum2=0, sum3=0;
    scanf("%d%d%d", &day, &mon, &year);
    while(day>0){
            sum+=(day%10);
            day=day/10;
    }
    while(mon>0){
            sum+=(mon%10);
            mon=mon/10;
    }
    while(year>0){
            sum+=(year%10);
            year=year/10;
    }
    printf("%d", sum);
    while(sum>0){
        sum2+=(sum%10);
        sum/=10;
    }
    printf(" %d", sum2);
    if(sum2>9){
        while(sum2>0){
            sum3+=(sum2%10);
            sum2/=10;
        }
        printf(" %d", sum3);
    }
}
