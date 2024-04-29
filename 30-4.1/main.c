#include <stdio.h>
#include <stdlib.h>
/*
30-4
viet ham nhan vao n . tinh n giai thua
*/
int GiaiThua(int number);
int GiaiThuaV2(int number);
int main(){
    int n ;
    do{
        printf("\nNhap di ban = ");
        scanf("%d", &n);
        if(n < 0){
            printf("\nNgu !");
        }
    }while(n < 0);
    int num = GiaiThua(n);
   // printf("%d", num);
    printf("\n%d",GiaiThuaV2(n));
    return 0;
}
int GiaiThuaV2(int number){
    if(number  == 1 || number == 0){
        return 1 ;
    }
    return number*GiaiThuaV2(number - 1);
}
int GiaiThua(int number){
    if(number == 0){
        return 0 ;
    }
    int result = 1 ;
    for(int i = 1 ; i <= number  ; i++){
        result *= i ;
    }
    return result ;
}
