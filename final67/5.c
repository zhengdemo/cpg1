#include <stdio.h>
#include <string.h>
void main(){
    int n;
    char signal[100];
    scanf("%s", signal);
    scanf("%d", &n);
    int length = strlen(signal)*(n-1)+1;
    char graph[n][length];
    char nowsig = '1', nextsig = signal[0];
    for(int i=0; i<n; i++){
        for(int j=0; j<length; j++){
            graph[i][j]='_';
        }
    }
    for(int i=0; i<strlen(signal); i++){
        if(nowsig != nextsig){
            for(int j=0; j<n; j++){
                graph[j][i*(n-1)] = 'x';
            }
        }
        nowsig = nextsig;
        nextsig = signal[i+1];
    }

    int currsig;
    if(signal[0]=='0') currsig = 0; else currsig = 1;
    for(int i=0; i<length; i++){
        if(graph[0][i]=='x' || (graph[0][i]=='_' && i==0)){
            currsig = (currsig+1) % 2;
        }
            graph[currsig*(n-1)][i]='x';
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<length; j++){
            printf("%c", graph[i][j]);
        }
        printf("\n");
    }
}
