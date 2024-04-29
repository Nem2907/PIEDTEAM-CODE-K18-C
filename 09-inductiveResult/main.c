#include <stdio.h>
#include <stdlib.h>
/*
09-inductiveResult
    nhập số nguyên n
    tính kết quả cua 1^n + 2^n +... + n^n
    vd n = 5
    thì tính 1^5 + 2^5 + ... + 5^5
       n = 3
    thì tính 1^3 + 2^3 + ... + 3^3
    Ôn bài tam giác

*/
int main()
{
    int n ;
    int sum = 0 ;

    printf("\nNhap n = ");
    scanf("%d",&n);

    if(n <= 0 ){
        printf("Vui long nhap lai");
        return 0 ; // ngừng luôn chương trình
    }else{
        for(int i = 1 ; i <= n; i++){
            sum = sum + pow(i, n);
        // pow (cơ số dưới , cơ số mũ)  == pow(a,b) = a^b
        }
    }
    printf("\nTong la = %d",sum);
    return 0;

}
