#include <stdio.h>
#include <stdlib.h> // สำหรับ exit()

// ใช้ global array ที่มีขนาดใหญ่ เพื่อหลีกเลี่ยง VLA และ Stack Overflow
char ka[10][250000];

void main(){
    int c; // nCol
    // int nRow = 10;

    printf("Enter number of columns: ");
    if (scanf("%d", &c) != 1 || c < 0 || c > 250000) {
        printf("Invalid input or column count too large.\n");
        // หากต้องการให้แสดง "None" เมื่อ c < 0 ให้ใส่เงื่อนไขตรงนี้
        if (c < 0) {
            printf("None\n");
        }
        return; // ออกจากโปรแกรม
    }

    // 1. Initialization: เติม '-' ทั้งหมด
    for(int i=0; i<10; i++){
        for(int j=0; j<c; j++){
            ka[i][j] = '-';
        }
    }

    int nRow = 10;
    int cycle_size = nRow / 2; // 5

    // 2. Pattern Generation: สร้างส่วนบนและล่างพร้อมกัน
    // ลูปจะทำงานสำหรับแถว i = 0, 1, 2 เท่านั้น
    for(int i = 0; i < nRow / 2 - 1; i++){
        // r คือค่าที่จะนำไปเทียบกับ col%5 เพื่อสร้างเส้นทแยงมุม
        // r จะเป็น 3, 2, 1 ตามลำดับ
        int r = nRow / 2 - 2 - i;

        for(int j = 0; j < c; j++){ // j คือ col
            int col_cycle = j % cycle_size; // col_cycle คือ j % 5

            // A. Diagonal Slashes ( / และ \ )
            if(r == col_cycle){
                // ส่วนบน (Top)
                ka[i][j] = '/';
                // ส่วนล่าง (Bottom) ด้วยหลักสมมาตร
                ka[nRow - 1 - i][j] = '\\';
            }

            // B. Vertical Bars ( | )
            // ตำแหน่งขอบคอลัมน์: j % 5 == 4
            else if(col_cycle == cycle_size - 1){
                ka[i][j] = '|';
                ka[nRow - 1 - i][j] = '|';
            }
        }
    }

    // 3. Printing: พิมพ์ผลลัพธ์
    for(int i=0; i<nRow; i++){
        for(int j=0; j<c; j++){
            printf("%c", ka[i][j]);
        }
        printf("\n");
    }
}
