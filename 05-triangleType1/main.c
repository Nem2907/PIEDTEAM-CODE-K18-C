#include <stdio.h>
#include <stdlib.h>

// 05
/*
Nhập 3 số nguyên  : a, b c
Kiểm tra xem a b c có tạo thành tam giác k o
Nếu có thì tọa thành tam giác gì ?
*/
int main()
{
    int a, b ,c ;
    printf("Enter 3 number\n" );

    printf("\nEnter a = ");
    scanf("%d",&a);

    printf("\nEnter b = ");
    scanf("%d",&b);

    printf("\nEnter c = ");
    scanf("%d",&c);

    // nếu code chạy đến đây , nghĩa là a b c đã có giá trị
    // kiểm tra a b c có tạo thành tam giác không

    if(a + b > c && a + c > b && c + b >a){
        // kiểm tra xem là tam giác gì
        if(a == b || a==c || b == c){ // có 2 cạnh bằng
            // tam giác cân
            if(a == b || b == c ){
                printf("\nDay la tam giac deu ");
            }else if( a*a + b*b == c*c ||
                      a*a + c*c == b*b ||
                      c*c + b*b == a*a ){ // có góc vuông
                printf("\nDay la tam giac vuong can");
            }else{
                printf("\nDay la tam giac can");
            }
        }else if(a*a + b*b == c*c ||
                 a*b + c*c == b*b ||
                 c*c + b*b == a*a ){
            printf("\nDay la tam giac vuong ");
        }else{
            printf("\nDay la tam giac binh thuong");
        }
    }else{
        printf("\na b c khong phai la tam giac");
    }



    return 0;
}
a = 4.19
float b = a - (int)a =4.19 - 4 = 0.19
float c = round(b * 100); 0.2 20
int d = c % 100 ; 20
e = reverse
checkPrime
