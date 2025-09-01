#include <stdio.h>
int main() {
    int n ;

    printf("Enter Number: ") ;
    scanf("%d", &n) ;

    int i = n ;

    // วนจาก n ลงไปถึง 2
    do {
        int prime = 1 ;  // สมมติว่าเป็นจำนวนเฉพาะ
        int j = 2 ;

        // ตรวจสอบตัวหาร
        do {
            if  ( i % j == 0 ) {
                prime = 0 ; // มีตัวหารลงตัว
                break ;
            }
            j++ ;
        } while (j <= i / 2) ;

        if (prime && i >= 2) {
            printf("%d ", i) ;
        }
        i-- ; // ลดค่า i เพื่อตรวจต่อ
    } while (i >= 2) ;
    return 0 ;
}
