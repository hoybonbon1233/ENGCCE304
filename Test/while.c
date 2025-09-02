#include <stdio.h>
int main() {
    int N ;
    printf( "Enter Number: " ) ;
    scanf( "%d",&N ) ;

    int i = N ;
    while (  i >= 2  ) {
        int prime = 1 ; 
        int n = 2 ;
        while ( n <= i / 2 ) {
            if ( i % n == 0 ) {
                prime = 0 ; 
                break ;
            }
            n++ ;
        } if (prime) {
            printf( "%d ",i )  ;
        }
        i-- ;
    }//end while
    return 0 ;
}//end main function
