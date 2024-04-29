#include <stdio.h>
#include <stdlib.h>
/*
Yêu cầu : nhập số nguyên vào n >= 2 , tính tích các số chẳn và tích các số lẻ có trong đoạn
từ 1 đến n-1
*/
int main()
{
    int n ;
    char buffer ;
    do{
        do{
            printf("\nEnter number = ");
            scanf("%d", &n);
            scanf("%c", &buffer); // %c nha e
            fflush(stdin); // ghi nhớ
            if(buffer != 10 ){
                printf("\nTry again , stupid ! ");
            }
        }while(buffer != 10 || n < 2 );
        if(n == 0){
            printf("End Program");
            return 0;
        }
        int sumOdd = 1;
        int sumEven = 1;
        if(n >= 2){
            for(int i = 1 ; i <= n-1 ; i++){
                if(i % 2 == 0){
                    sumEven *=i ;
                }else{
                    sumOdd *=i ;
                }
            }
        }
        printf("\n Even = %d",sumEven);
        printf("\n Odd = %d",sumOdd);
    }while(buffer != 10 || n != 0 );

    return 0;
}


int n;
char buffer ;
int mulEven = 1;
int mulOdd = 1;
int hasEven = 0 ;
int hasOdd = 0 ;
do{
    printf("\nNhap di ban");
    scanf("%d", &n);
    scanf("%c", &buffer);
    fflush(stdin);
    if(buffer != 10 || n < 2){
        printf("\nNhap lai di ban ");
    }
}while(buffer != 10 || n<2 );
// process
for(int i = 1 ; i <= n-1; i++){
    if(i%2 == 0){
        mulEven *= i;
        hasEven = 1;
    }else{
        mulOdd *= i;
        hasOdd = 1;
    }
}

mulEven *= hasEven;
mulOdd *= hasOdd ;

//in ra
printf("Even = %d",mulEven);
printf("Odd = %d", mulOdd);
return 0 ;
