#include <stdio.h>
int main() {
    int n ;
    printf( "Enter Number: " ) ;
    scanf( "%d", &n ) ;

    int i = n ;
    while (  i >= 2  ) {
        int prime = 1; // สมมติว่าเป็นจำนวนเฉพาะ
        int j = 2;
        while ( j <= i / 2 ) {
            if ( i % j == 0 ) {
                prime = 0 ; // ถ้ามีตัวหารลงตัว ไม่ใช่จำนวนเฉพาะ
                break ;
            }
            j++ ;
        }
        if (prime) {
            printf("%d ", i) ;
        }
        i-- ;
    }
    return 0 ;
}
