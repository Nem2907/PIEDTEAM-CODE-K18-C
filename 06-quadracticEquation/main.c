#include <stdio.h>
#include <stdlib.h>
//06- quadraticEquation
/*
Nhập vào 3 số thực đại diện cho a b c
là hệ số nghiệm của phương trình ax^2 + bx +c =0
tìm nghiệm của phương trình trên
*/
int main()
{
    float a , b , c , x1 , x2 , x3 , x , delta ;

    printf("\nEnter a = ");
    scanf("%f",&a);

    printf("\nEnter b = ");
    scanf("%f",&b);

    printf("\nEnter c = ");
    scanf("%f",&c);



    if(a == 0 ){
        if(b == 0 ){
            if(c == 0){
                printf("Phuong trinh vo so nghiem");
            }else{
                printf("Phuong trinh vo nghiem")
            }
        }else{
             x = ( (-c)/ b );
            printf("Phuong trinh bac nhat co nghiem %.2f ",x);
        }
    }else{
        delta = pow(b, 2) - (4*a*c);

            if(delta < 0 ){
                printf("\nPhuong trinh khong co nghiem");
            }else if(delta > 0){
                x1 = ( ( -b + sqrt(delta)) / (2*a) ) ;
                x2 = ( ( -b - sqrt(delta)) / (2*a) ) ;
                printf("Phuong trinh co 2 nghiem phan biet x1 = %.2f , x2 =%.2f ", x1 , x2);
            }else if(delta == 0 ){
                x3 = ( (-b)/ (2*a) );
                printf("Phuong trinh co nghiem kep x = %.2f", x3);
            }
    }
    return 0;
}
