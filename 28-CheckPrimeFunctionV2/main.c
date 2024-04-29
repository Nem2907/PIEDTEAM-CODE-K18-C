#include <stdio.h>
#include <stdlib.h>
//28-CheckPrimeFunctionV2
void CheckPrimeV2(int a);
int main()
{
    int n ;
    printf("\nEnter number = ");
    scanf("%d", &n);

    CheckPrimeV2(n);

    return 0;
}
void CheckPrimeV2(int number){
    if( number >= 2 ){
        int isPrime = 1 ;
        for(int i = 2 ; i <= number - 1 ; i++){
            if(number % i == 0){
                isPrime = 0 ;
                break ;
            }
        }
        if( isPrime == 1){
            printf("\n %d is Prime ", number);
        }else{
            printf("\n %d is not Prime ", number);
        }
    }
}
