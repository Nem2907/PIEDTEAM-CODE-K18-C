#include <stdio.h>
#include <stdlib.h>
//28-CheckPrimeV3
/*
hàm tự xin một số nguyên
kiểm tra số nguyên có phải số nguyên tố khoogn
nếm 1 nếu là Prime , còn ko thi 0
*/
int CheckPrimeV3(void);
int main()
{
    if(CheckPrimeV3()){
        printf("\nIs prime ");
    }else{
        printf("\nIs not prime ");
    }
    return 0;
}
int CheckPrimeV3(void){
    int n;
    printf("\nEnter number = ");
    scanf("%d", &n);

    if(n >= 2){
        for( int i = 2 ; i <= n -1 ; i++){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0 ;
    }
}
