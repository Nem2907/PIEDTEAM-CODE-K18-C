#include <stdio.h>
#include <stdlib.h>
/*
15-doWhile-while
loop : vòng lặp
for | do while | while
    for : xét điều kiện rồi làm   : dùng cho vòng lặp có khởi đầu
    while : làm rồi xét điều kiện : dùng cho việc dụ người dùng nhập
                                    vì nó không quan tâm đến bước nhảy vào điều kiện thoát


*/
int main()
{
   /* int i = 15 ;
    do{
        printf("\nI love you Kim Chi %d ",i);
        i++ ;
    }while(i <= 10);
*/

    /*
    int a ;
    for(;;){
        printf("\n nhap a di= ");
        scanf("%d",&a);
        if(a == 15){
            break;
        }
    }*/

    /*int a ;
    do{
        printf("\nNhap a di ban ey = ");
        scanf("%d",&a);
    }while(a!= 15);
    */

    int  i= 1 ;
    while(i <= 10){
        printf("\n I lop du chu ca mo %d",i);
        i++;
    }// thường dùng với boolean -- > True hoặc False
    return 0;
}
