#include <stdio.h>
#include <stdlib.h>
// kiem tra so nguyen co phai snt ko
//28-CheckPrimeV1
void CheckPrimeV1(void); // ko dau vao ko dau ra
int CheckPrimeV2(void); // co dua ra ko dau vao
void CheckPrimeV3(int number);// co dau vao ko dau ra
int CheckPrimeV4(int number); // co dau vao co dau ra

int main()
{
    // c1 : return : dua ra ket qua
    // c2 : isPrime + break  :
    // em chi nen dung return khi chuong trinh em o cuoi cung
    // hoac la co 1 chuong trinh
    CheckPrimeV1();// call
    return 0;
}


void CheckPrimeV1(void){ // build
    int number ;
    printf("\nEnter number = ");
    scanf("%d", &number);

    if(number >= 2){
        for(int i = 2 ; i <= number-1 ;i++){
            if(number % i == 0){
                printf("\n%d ko phai SNT", number);
                return 0 ;
            }
        }
        printf("\n%d la SNT", number);
    }else{
        printf("\n%d ko phai SNT", number);
    }
}
