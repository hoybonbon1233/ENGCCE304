#include <stdio.h>
int main() {
    int n;
    
    printf("Enter Number : ");
    scanf("%d", &n);

    
    for (int i = n; i >= 2; i--) {//นำค่าที่ผู้ใช้กรอกมา -ออกทีละ1
        int prime = 1; 

        // ตรวจสอบตัวหารตั้งแต่ 2 ถึง i/2
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                prime = 0; // ถ้ามีตัวหารลงตัว ไม่ใช่จำนวนเฉพาะ
                break;
            }
        }
        // ถ้า prime = 1 แสดงว่าเป็นจำนวนเฉพาะ
        if (prime) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
