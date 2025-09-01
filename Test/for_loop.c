#include <stdio.h>
int main() {
    int N ;
    printf( "Enter Number: " );
    scanf( "%d", &N ) ;

    for (int i = N; i >= 2; i--) { // ตรวจสอบตัวเลขจาก N ลงไปถึง 2
        int prime = 1 ; 
        for (int n = 2; n <= i / 2; n++) { // ตรวจสอบตัวหารตั้งแต่ 2 ถึง i/2
            if (i % n == 0) {
                prime = 0 ; // ถ้ามีตัวหารลงตัว => ไม่ใช่จำนวนเฉพาะ
                break ;     // เจอตัวหารแล้วหยุดเช็คต่อ
            }
        }   
        if (prime) { // ถ้า prime = 1 คือจำนวนเฉพาะ
            printf( "%d ", i ) ;
        }
    }
    return 0 ;
}
