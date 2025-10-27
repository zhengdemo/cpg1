#include<stdio.h>
struct{
    int id;
    char name[51];
    int level[8];
} typedef Pokemon;
void main(){
    int n, k;
    scanf("%d", &n);
    Pokemon m[n];
    for(int i=0; i<n; i++){
        scanf("%d", &m[i].id);
        scanf(" %s", m[i].name);
        for(int j=0; j<8; j++){
            scanf("%d", &m[i].level[j]);
        }
    }
//    for(int i=0; i<n; i++){
//        printf("%d ", m[i].id);
//        printf("%s ", m[i].name);
//        for(int j=0; j<8; j++){
//            printf("%d ", m[i].level[j]);
//        }
//        printf("\n");
//    }
//    int s_id, s_lv;
//        scanf("%d%d", &s_id, &s_lv);
//        printf("%s %d\n", m[s_id].name, m[s_id].level[s_lv-1]);
    scanf("%d", &k);
    for(int i = 0; i < k; i++){
        int s_id, s_lv;
        scanf("%d%d", &s_id, &s_lv);
            int id;
        for(int j = 0; j<n; j++){
            if(s_id==m[j].id) id = j;
        }
        printf("%s %d\n", m[id].name, m[id].level[s_lv-1]);
    }
}
