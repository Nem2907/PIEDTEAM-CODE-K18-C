#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number ;
    char buffer ;
    while(1 == 1){
        // ép dùng số nguyên
        do{
            printf("\nEnter number = ");
            scanf("%d", &number);
            scanf("%c", &buffer);
            fflush(stdin);
            if(buffer != 10){
                printf("\nNhap lai di ban eyyyyyyyyyyyyyyyyyyyyyyyyyyyyy");
            }
        }while(buffer != 10);
        if( number == 0){ // điều kiện thoát
            return 0 ;
            }
        // nếu code đến đây có nghĩ là number mình nhập
        // đã trở thành số nguyên để chúng ta kiểm tra
        // có phải số nguyên tố
        int isPrime = 1 ;
        if(number >=2 ){
            for(int i = 2 ; i <= number -1 ;i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                printf("%d la so nguyen to ",number);
            }else{
                printf("%d ko la so nguyen to ",number);
            }
        }else{
            printf("%d la ko so nguyen to ",number);
        }
    }
    return 0;
}
/*
do while :
while :
*/
