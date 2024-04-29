#include <stdio.h>
#include <stdlib.h>
//2. 17-timeCalculation
//nhập vào 1 số nguyên đại diện cho s
//từ s đó quy ra giờ phút giây
//vd: 4700s
//01:18:20
//phải in theo format
//  hint: %02d | sử dụng / %
int main()
{
    int number;

    printf("\nEnter Number = ");
    scanf("%d", &number);

    //tìm tiếng
    int hour = number / 3600 ; // chia hết
    int s = number % 3600 ; // Khai báo 1 biến để lấy phần dư
    // tìm phút
    int minute = s / 60 ;
    // tìm giây
    int second = s % 60 ;

    printf("%02d:%02d:%02d", hour , minute ,second );
    return 0;
}
