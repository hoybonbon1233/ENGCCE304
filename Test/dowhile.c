#include <stdio.h>
int main() {
    int N ;
    printf( "Enter Number: " ) ;
    scanf( "%d",&N ) ;

    int i = N ;
    // วนจาก n ลงไปถึง 2
    do {
        int prime = 1 ;  // สมมติว่าเป็นจำนวนเฉพาะ
        int n = 2 ;
         
        do {//ตรวจตัวหาร
            if  ( i % n == 0 ) {
                prime = 0 ; // มีตัวหารลงตัว
            }
            n++ ;
        } while ( n <= i / 2 ) ;
        if ( prime && i >= 2 ) {
            printf( "%d ", i ) ;
        }
        i-- ; // ลดค่า i เพื่อตรวจต่อ
    } while ( i >= 2 ) ;
    return 0 ;
}
