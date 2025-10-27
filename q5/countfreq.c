#include <stdio.h>
void main(){
    int n, s=0, c=0, t=0, m=0;
    scanf("%d", &n);
    int arr[n], all[n], count[n];
    for(int i=0; i<n; i++){
        arr[i]=0;
        count[i]=0;
    }
    for(int i=0; i<n; i++){
        int x;
        scanf("%d", &x);
        t = 0;
        s = 0;
        all[i] = x;
        for(int j=0; j<n; j++){
            t++;
            if(x == arr[j]){
                s++;
            }
            if(t==n-1&&s==0){
                arr[i] = x;
                m++;
            }
        }
    }
    for(int i=0; i<n; i++){
        int nownum = arr[i];
        c=0;
        for(int j=0; j<n; j++){
            if(nownum == all[j] && nownum != 0){
                c++;
            }
        }
        count[i] = c;
    }
        printf("%d\n", m);
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            printf("%d %d\n", arr[i], count[i]);
        }
    }
}
