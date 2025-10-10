#include <stdio.h>
int main() {
    int Height , Width ;
    float Area;
    printf("Enter Height : \n");
    scanf("%d",&Height);
    printf("Enter Width: \n");
    scanf("%d",&Width);
    Area = (Height*Width) / 2 ;
    printf("Area is %d",Area);
    return 0 ;
}