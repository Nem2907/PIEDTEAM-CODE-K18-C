#include <stdio.h>
#include <stdlib.h>
// kiem tra so ngto
//28-CheckPrimeV2
void CheckPrimeV2(int number); // co dau vao ko dau ra

int main()
{
    int n;
    printf("\nEnter number = ");
    scanf("%d", &n);
    CheckPrimeV2(n);
    return 0;
}
void CheckPrimeV2(int number){
    if(number >= 2){
        for(int i = 2 ; i <= number - 1 ; i++){
            if(number % i == 0){
                printf("\n%d is not Prime ", number);
                return 0 ;
            }
        }
        printf("\n%d is Prime ",number);
    }else{
        printf("\n%d is not Prime ", number);
    }
}
