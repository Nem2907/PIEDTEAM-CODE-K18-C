#include <stdio.h>
#include <stdlib.h>
/*
2.: Sum all Element
Cho người dùng nhập vào một số
tính tổng các phần tử của số đó
ví dụ : 1234
1 + 2 + 3 + 4 = 10
Làm lại cho nhớ
*/
int main()
{
    int number;
    int sum = 0 ;

    /*
    while (number > 0 ){
        sum = sum + (number % 10); // 123
        number = number / 10;
    }
    printf("\nSum =%d ",sum);
    */
    char buffer ;
    do{// phần để ép người dùng nhập đúng (Không đàng hoàng)
        printf("\nEnter Number = ");
        scanf("%d",&number);
        scanf("%c",buffer); // hứng phần dư
        fflush(stdin); // xóa các phần dư còn lại
        if(buffer = 10 || number <0 ){
            printf("\nStupid , Positive number !");
        }
    }while(buffer != 10 || number < 0);
//         check phần dư    check số

        while (number > 0 ){
        sum = sum + (number % 10); // 123
        number = number / 10;
        }
        printf("\nSum =%d ",sum);




    /*
    do{
        sum = sum + (number % 10); // 123
        number = number / 10;
    }while(number != 0);
    printf("Sum = %d",sum);
    */
    return 0;
}
