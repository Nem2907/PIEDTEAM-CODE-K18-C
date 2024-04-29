#include <stdio.h>
#include <stdlib.h>
/*
13-countPrime
Nhập vào start và end
in ra màn hình các số Prime trong đoạn
*/

int main()
{
    int start ;
    int end ;
    int isPrime = 1 ;

    printf("\nEnter Start= ");
    scanf("%d",&start);

    printf("\nEnter End= ");
    scanf("%d",&end);

    if(start > end){
        int tmp = start ;
            start = end ;
            end = tmp;
    }
        for(int number = start ; number <= end ; number++){
            isPrime = 1 ; // reset niềm tin để vào (1)
            if(number >= 2 ){
                // kiểm tra tiếp
                for(int i = 2 ; i <= number - 1 ; i++){
                    if(number % i == 0 ){
                        isPrime = 0 ; // (1)
                        break;
                    }
                }
                if(isPrime == 1){
                    printf("%3d ",number);
                }
            }
        }
    return 0;
}
