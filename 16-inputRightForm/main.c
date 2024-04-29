#include <stdio.h>
#include <stdlib.h>
/*
ép người dùng nhập số nguyên đích thực , sai thì chữi nó và ép nhập lại

12 oke
-12 oke
17.6 chữi , ép nhập lại
12a chữi ép nhập lại
*/
int main()
{
    int number;
    char ch;
    do{
        printf("\n Nhap so nguyen = ");
        scanf("%d",&number);
        scanf("%c", &ch); // hứng phần dư để kiểm tra số nguyên
        fflush(stdin); // để xóa phần dư còn lại
        if(ch != 10){
            printf("\n Du ma may. Ngu");
            printf("\n Do u know input integer ?");
        }
    }while(ch != 10);
    return 0;
}


/*
17 : tính tổng Prime trong start và end
18 : nhập vào số nguyên s
    quy đổi s = ra giờ phút giây
    vd : 4700
    01:18:20

*/
