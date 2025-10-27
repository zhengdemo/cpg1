#include <stdio.h>
void main(){
    int x, n, cpc=0;
    scanf("%d%d", &x, &n);
    for(int i=0; i<n; i++){
        char c;
        scanf(" %c", &c);
        if(c >= 'A' && c <= 'Z'){
            int newx = c - 65;
            char newc = (newx + x)%26 + 65;
            printf("%c\n", newc);
            x = (x+1)%10;
            cpc = 1;
        }
    }
    if(cpc==0){
        printf("None");
    }
}
