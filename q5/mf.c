#include <stdio.h>
int arr[1000000], frq[1000000];
void main(){
    int n=0, x, allnum=0;
    while(1){
            int found = 0;
        scanf("%d", &x);
        if(x<1) break;
        allnum++;
        for(int i=0; i<n; i++){
            if(arr[i]==x){
                frq[i] += 1;
                found = 1;
                break;
            }
        }
        if(found == 0){
                arr[n] = x;
                frq[n] = 1;
                n++;
        }
    }

    int max = -1;
    for(int i=0; i<n; i++){
        if(frq[i]>max){
            max = frq[i];
        }
    }

    printf("%d\n", allnum);
    for(int i=0; i<n; i++){
        if(frq[i]==max){
            printf("%d ", arr[i]);
        }
    }

//    for(int i=0; i<n; i++){
//        printf("%d %d\n", arr[i], frq[i]);
//    }
}
