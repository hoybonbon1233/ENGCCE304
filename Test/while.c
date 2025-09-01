#include <stdio.h>
int main() {
    int N ;
    printf( "Enter Number: " ) ;
    scanf( "%d", &N ) ;

    int i = N ;
    while (  i >= 2  ) {
        int prime = 1; // สมมติว่าเป็นจำนวนเฉพาะ
        int n = 2;
        while ( n <= i / 2 ) {
            if ( i % n == 0 ) {
                prime = 0 ; // ถ้ามีตัวหารลงตัว ไม่ใช่จำนวนเฉพาะ
            }
            n++ ;
        }
        if (prime) {
            printf("%d ", i) ;
        }
        i-- ;
    }
    return 0 ;
}
