#include <stdio.h>
#include <stdlib.h>
// Check Prime V4
int isPrime(int number);
int main()
{
    int n;
    printf("\nEnter number = ");
    scanf("%d", &n);
    if(isPrime(n)){
        printf("\n%d is Prime ", n);
    }else{
        printf("\n%d is not Prime ",n);
    }
    return 0;
}
int isPrime(int number){
    if(number >= 2){
        for(int i = 2 ; i <= number -1 ; i++){
            if(number % i == 0 ){
               return 0;
            }
        }
        return 1;
    }
    return 0 ;
}
/*
int isPrime(int number){
        for(int i = 2 ; i <= number -1 ; i++){
            if(number % i == 0 ){
               return 0;
            }
        }
    return number >= 2 ;
}
*/
