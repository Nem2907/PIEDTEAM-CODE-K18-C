#include <stdio.h>
#include <stdlib.h>
int CheckPrimeV4(int number);
int main()
{
    int n ;
    printf("\nEnter number = ");
    scanf("%d", &n);
    if(CheckPrimeV4(n) == 1){\
        printf("\n%
               d is Prime ", n);
    }else{
         printf("\n%d is not Prime ", n);
    }
    return 0;
}
int CheckPrimeV4(int number){
    if(number >= 2){
        for(int i =2 ; i<= number- 1; i++){
            if(number %i == 0){
                return 0 ;
                break;
            }
        }
        return 1;
    }
}
