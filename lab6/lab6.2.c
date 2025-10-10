#include <stdio.h>
int main() {
    int N ;
    printf(" Enter value: ") ;
    scanf("%d",&N) ;

    if( N % 2 == 1){//ถ้าหารแล้วเศษ = 1 
        printf("Series: ") ;
        for(int i = 1 ; i <= N ; i+= 2){//ทำลูป เริ่มต้นที่ i = 1 จนถึง น้อยกว่า= N เพิ่มทีละ 2 จนถึง N
            printf("%d ", i) ;
        }
    } else {
        printf("Series: ") ;
        for(int i = N; i >= 0 ; i -= 2) {//เริ่มต้นที่ N(i)แล้ว i มากกว่า = 0 ลดทีละ 2 จนถึง 0
            printf("%d ", i) ;
        }
    }
    return 0 ;
}//end main function