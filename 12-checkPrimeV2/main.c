#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("\nNhap number = ");
    scanf("%d", &number);
    int isPrime = 1 ; // 1 : true , 0 : false

    if(number >= 2 ){
        // kiểm tra
        for(int i = 2 ; i <= number - 1 , i++){
            if(number % i == 0 ){
                // do something
                isPrime = 0 ;// niềm tin đã mất
                break; // dừng vòng lặp (loop) gần nhất
            }

        }
        if (isPrime == 1){
            printf("\n%d is Prime", number);
        }else{
            printf("\n%d is not Prime", number);
        }
    }else{
        printf("\n%d is not prime",number);
    }


/*
    if(n < 2){
        printf("Day ko phai so nguyen to");
    }else{
        for(int i = 1 ; i <= n; i++){
        if (n % i == 0 ){
            count++;
            }
        }

        if(count == 2){
            printf("Day la so nguyen to");
        }else{
            printf("Ko phai la so nguyen to");
        }
    }
    return 0;
*/
}
