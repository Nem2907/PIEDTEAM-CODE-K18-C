#include <stdio.h>
#include <stdlib.h>
// 07-for loop : vòng lặp for

int main()
{
    /*
    for(khởi đầu ; điều kiện thoát ; bước nhảy ){
        command block ;
    }
    */
    int sum = 0 ;
    for(int i = 1 ; i <= 4 ; i++ ){

        printf("\n%d Nguyen Kim Chi ",sum); // 0 ; 1  ; 3 ; 6
        sum+=i;
    }
//    int c = 10 ;
//    int d = 10 ;
//    printf("\n%d",TinhTong(c,d));
    return 0;
}

/*
int TinhTong(int a , int b){
    int tong = a + b ;
    return tong ;
}
*/
