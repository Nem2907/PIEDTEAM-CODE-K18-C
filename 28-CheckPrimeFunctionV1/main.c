#include <stdio.h>
#include <stdlib.h>
//28-CheckPrimeFunctionV1
void CheckPrimeV1(void);
int main()
{
    CheckPrimeV1();
    return 0;
}
void CheckPrimeV1(void){
    int n ;
    printf("\nEnter number = ");
    scanf("%d", &n);

    if(n >= 2){
        int isPrime = 1 ;
        for(int i = 2; i<= n-1 ; i++){
            if( n % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1){
            printf("\n%d is Prime ", n);
        }else{
            printf("\n%d is not Prime ", n);
        }
    }else{
        printf("\n%d is not Prime ", n);
    }
}
