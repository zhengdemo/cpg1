#include <stdio.h>
int arr[1000000],raa[1000000];
void main(){
    int n=0, x, now, prev=0, c=0, highc=0, pr=-1, rc=0;
    while(1){
        scanf("%d", &x);
        if(x<1) break;
        arr[n] = x;
        n++;
    }
    for(int i=0; i<n; i++){
        now = arr[i];
        for(int j=0; j<n; j++){
            if(now==arr[j]){
                c++;
            }
        }
        if(highc<c){
            highc = c;
        }
        c = 0;
    }
    printf("%d\n", n);
    for(int i=0; i<n; i++){
        now = arr[i];
        c=0;
        for(int j=0; j<n; j++){
            if(now==arr[j]){
                c++;
            }
        }
        if(c == highc){
            raa[rc] = now;
            rc++;
        }
    }
    for(int i=0; i<rc; i++){
        now = raa[i];
        for(int j=0; j<rc; j++){
            if(now!=raa[j]){
                printf("%d ", raa[i]);
            }
        }
    }
}
