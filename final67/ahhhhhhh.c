#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void print_digital_signal(const char* binary, int size) {
    int len = strlen(binary);
    int select;
    char doom[len*(size-1)+1][size];
    char current_state='1', next_state=binary[0];

    for(int i=0; i<size; i++){
        for(int j=0; j<len*(size-1)+1; j++){
            doom[j][i] = '_';
        }
    }

    for (int i=0; i<len; i++){
        if (current_state=='1' && next_state=='0'){
            for (int j=0; j<size; j++){
                doom[i*(size-1)][j]='x';
            }
        } else if (current_state=='0' && next_state=='1'){
            for (int j=0; j<size; j++){
                doom[i*(size-1)][j]='x';
            }
        }
        current_state = next_state;
        next_state = binary[i+1];
    }

    if(binary[0]=='0'){
            select=0;
    } else select=1;
    for(int j=0; j<len*(size-1)+1; j++){
        if(doom[j][0]=='x' || (doom[j][0]=='_' && j==0))
            select = (select+1)%2;
        doom[j][select*(size-1)]='x';
    }

    for(int i=0; i<size; i++){
        for(int j=0; j<len*(size-1)+1; j++){
            printf("%c", doom[j][i]);
        }
        printf("\n");
    }

}

void main() {
    char binary[MAX_LENGTH];
    int size;

    scanf("%s", binary);
    scanf("%d", &size);

    print_digital_signal(binary, size);
}

