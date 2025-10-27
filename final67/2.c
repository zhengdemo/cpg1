#include <stdio.h>
void main(){
    int x, n, cpc=0;
    scanf("%d%d", &x, &n);
    for(int i=0; i<n; i++){
        char c;
        scanf(" %c", &c);
        if(c >= 'A' && c <= 'Z'){
            c+=x;
            if(c > 'Z'){
                c-=26;
            }
            printf("%c\n", c);
            x=(x+1)%10;
            cpc=1;
        }
    }
    if(cpc==0){
        printf("None");
    }
}
