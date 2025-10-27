#include <stdio.h>
void main(){
    int x;
    char c;
    scanf("%d %c", &x, &c);
    if(c < 'A'||c > 'Z'){
        printf("Out of range");
    }
    else{
        c+=x;
        if(c > 'Z'){
            c-=26;
        }
        printf("%c", c);
    }
}
