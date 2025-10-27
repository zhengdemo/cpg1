#include <stdio.h>
void main(){
    int x, n, sum1=0, sum2=0, tc1=0, tc2=0, c=1;
    scanf("%d", &n);
    if(n < 0){n*=-1; c=0;}
    int t1[n], t2[n];
    for(int i=0; i<n; i++){
        scanf("%d", &x);
        if(sum1<=sum2){
            sum1+=x;
            t1[tc1]=x;
            tc1++;
        }
        else{
            sum2+=x;
            t2[tc2]=x;
            tc2++;
        }
    }
    if(c!=0){
        printf("%d : ", sum1);
        for(int i=0; i<tc1 ; i++){
            printf("%d ", t1[i]);
        }
        printf("\n");
        printf("%d : ", sum2);
        for(int i=0; i<tc2 ; i++){
            printf("%d ", t2[i]);
        }
    }
    else printf("None");
}
