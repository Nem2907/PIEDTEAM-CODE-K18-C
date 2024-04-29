#include <stdio.h>
#include <stdlib.h>
/*
viết hàm nahanj vào 2 cạnh dài rộng
tính diện tích của hình chữ nhật
void : in
*/
float computeArea(float width , float height);
int main()
{
    float a , b ;
    printf("\nEnter a = ");
    scanf("%f", &a );
    printf("\nEnter b = ");
    scanf("%f", &b );

    float area = computeArea(a,b);
    printf("\nDien tich = %.2f", area);

    return 0;
}
float computeArea(float width , float height){
    float area = width * height ;
    return area ;
}
//bài tập về nh check Prime = 4 phiên bản !
