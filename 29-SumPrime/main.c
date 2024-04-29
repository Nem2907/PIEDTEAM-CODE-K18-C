#include <stdio.h>
#include <stdlib.h>
//29 SumPrime
/*
nhập vào start end ,
trong đoạn start end nếu có số nguyên tố
thì in ra màn hình
tính tổng các số
đếm các số đó
nếu mà đề chỉ kêu là in ra màn hình thì void

*/
int isPrime(int number);
int main()
{
    int start , end ;
    printf("\nEnter start = ");
    scanf("%d", &start);

    printf("\nEnter end = ");
    scanf("%d", &end);

    if( start > end ){
        int tmp = start ;
        start = end;
        end = tmp ;
    }
    int sum = 0;
    int count = 0 ;
    for(int num = start ; num <= end ; num++){
        // kiểm tra number có phải số nguyên tố không
        if(isPrime(num)){
            printf("\n%d", num); // in ra màn hình
            sum+= num ; // tổng các số nguyên tố
            count++ ; // đếm các số nguyên tố
        }
    }
    printf("\nSum = %d \nCount = %d", sum ,count);
    return 0;
}
int isPrime(int number){
    for(int i = 2 ; i <= number - 1; i++){
        if( number % i == 0){
            return 0;
        }
    }
    return number >= 2 ;
}
