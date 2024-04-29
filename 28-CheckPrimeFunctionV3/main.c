#include <stdio.h>
#include <stdlib.h>
int checkPrimeV3(void);
int main()
{
    if ( checkPrimeV3() == 1){
        printf("\n is Prime ");
    }else{
        printf("\n is not Prime ");
    }
    return 0;
}
int checkPrimeV3(void){
    int number ;
    printf("\nEnter number = ");
    scanf("%d", &number);
    if(number >= 2){
        for(int i = 2 ; i <= number -1 ;i++){
            if(number % i == 0){
                return 0 ;
                break;
            }
        }
        return 1 ;
    }
    return 0 ;
}

/*
int checkPrimeV3(void);
int main()
{
    checkPrimeV3();
    return 0;
}
int checkPrimeV3(void){
    int number ;
    printf("\nEnter number = ");
    scanf("%d", &number);
    if(number >= 2){
        int isPrime = 1;
        for(int i = 2 ; i <= number -1 ;i++){
            if(number % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1){
            printf("\n%d is Prime ", number);
            return 1 ;
        }else{
            printf("\n%d is not Prime ", number);
            return 0 ;
        }
    }else{
        printf("\n%d is not Prime ", number);
        return 0 ;
    }
}
*/
