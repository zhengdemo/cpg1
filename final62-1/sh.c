#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// จำกัดขนาดสูงสุดของนักเรียนและรหัส ตามที่โจทย์กำหนด N<=2000
#define MAX_STUDENTS 2000
#define MAX_ID_LEN 11 // รหัสไม่เกิน 10 ตัวอักษร, +1 สำหรับ null terminator

// โครงสร้างสำหรับเก็บข้อมูลนักศึกษาแต่ละคน
typedef struct {
    char id[MAX_ID_LEN];       // รหัสนักศึกษา (String)
    double total_score;        // ผลรวมคะแนน (ใช้ double เพื่อให้คำนวณได้แม่นยำ)
} Student;

int main() {
    int N; // จำนวนนักศึกษา (1 <= N <= 2000)
    int K; // จำนวนครั้งของการสอบย่อย (3 <= K <= 100)

    // 1. รับ N และ K
    if (scanf("%d %d", &N, &K) != 2) {
        // จัดการข้อผิดพลาดในการรับข้อมูล
        return 1;
    }

    // ตรวจสอบความถูกต้องของ N และ K ตามเงื่อนไขของโจทย์
    if (N < 1 || N > 2000 || K < 3 || K > 100) {
        return 1;
    }

    // สร้างอาร์เรย์ของโครงสร้าง Student เพื่อเก็บข้อมูลนักเรียน N คน
    Student students[MAX_STUDENTS];

    // 2. รับรหัสนักศึกษาจำนวน N คน
    // รหัสแต่ละคนเป็นข้อความมีขนาดไม่เกิน 10 ตัวอักษร [cite: 4, 8]
    for (int i = 0; i < N; i++) {
        if (scanf("%s", students[i].id) != 1) {
            return 1;
        }
        students[i].total_score = 0.0; // กำหนดผลรวมคะแนนเริ่มต้นเป็น 0
    }

    // 3. วนรับคะแนนสอบย่อย K บรรทัด
    // แต่ละบรรทัดมีคะแนนของนักเรียน N คน คั่นด้วยช่องว่าง
    // คะแนนมีค่าระหว่าง 0 ถึง 100 คะแนน
    for (int k = 0; k < K; k++) {
        int score;
        // วนรับคะแนนของนักเรียนทั้ง N คนในครั้งที่ k
        for (int i = 0; i < N; i++) {
            if (scanf("%d", &score) != 1) {
                return 1;
            }
            // สะสมคะแนนของนักเรียนคนที่ i
            students[i].total_score += (double)score;
        }
    }

    // 4. คำนวณและแสดงผลลัพธ์
    // แสดงทีละบรรทัด โดยแสดงรหัสนักศึกษา คั่นด้วยช่องว่าง และคะแนนเฉลี่ย
    // คะแนนเฉลี่ยแสดงเป็นทศนิยม 2 ตำแหน่ง โดยใช้ตัวแปร double precision
    for (int i = 0; i < N; i++) {
        double average_score = students[i].total_score / K;
        printf("%s %.2f\n", students[i].id, average_score);
    }

    return 0;
}
