#include <stdio.h>
int main() {
    char EmployeesID[10] ;
    int Hour = 0 ;
    float salary = 0.00 ;
        printf( " Enter the Employees ID : " ) ;
        scanf( "%s", EmployeesID ) ;
        printf( " Enter the working hrs: " ) ;
        scanf( "%e",&salary ) ;
        printf( " Enter the salary per hrs: " ) ;
        scanf( "%d",&Hour ) ;
        printf( " Expected Output:\n " ) ;
        printf( " Employees ID = %s\n",EmployeesID ) ;
        printf( " Salary amount/hr : %.2f\n ",Hour * salary ) ;
    return 0 ;
}//end