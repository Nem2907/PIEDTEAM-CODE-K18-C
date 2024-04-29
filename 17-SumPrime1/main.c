#include <stdio.h>
#include <stdlib.h>
// sumPrime : yêu cầu
/*
Nhập vào start và end
Nhiệm vụ : tính tổng các số nguyên tố trong đoạn start end
b1 : Check số nguyên tố
b2 : tạo biến sum : cộng tất cả các số nguyên tố đã check
b3 : printf
*/
int main()
{
    int start, end;
    int sum = 0 ;

    printf("\nEnter start= ");
    scanf("%d",&start);

    printf("\nEnter end= ");
    scanf("%d",&end);

    if(start > end){
        int tmp = start ;
        start = end ;
        end = tmp;
    }

    for(int number = start ; number <= end ; number++){
        int isPrime = 1;
        if(number >= 2){
            for(int i = 2 ; i <= number-1 ; i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
            sum += number;
            }else{
                isPrime = 1 ;
            }
        }
    }
    printf("\SumPrice= %d",sum);
    return 0;
}
