#include <stdio.h>
struct covid{
    int id;
    char name[201];
    int infect;
    int dead;
}typedef CVData;
void main(){
    int n, s_id, f;
    scanf("%d", &n);
    CVData dt[n];
    for(int i=0; i<n; i++){
        scanf("%d", &dt[i].id);
        scanf("%s ", dt[i].name);
        scanf("%d", &dt[i].infect);
        scanf("%d", &dt[i].dead);
    }
    while(1){
        scanf("%d", &f);
        if(f==0) break;
        for(int i=0; i<n; i++){
            if(f==dt[i].id) s_id = i;
        }
        printf("%s %d %d\n", dt[s_id].name, dt[s_id].infect, dt[s_id].dead);
    }
}
