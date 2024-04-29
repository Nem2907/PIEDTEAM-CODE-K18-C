#include <stdio.h>
#include <stdlib.h>
/* 30-6.1
Viet ham nhan vao n
tinh rong cac so chan tu 1 den n
*/
int SumEven(int number);
int main()
{
    int n ;
    do{
        printf("\nNhap so = ");
        scanf("%d", &n);
        if(n < 0){
            printf("\nNgu");
        }
    }while(n < 0);
    int num = SumEven(n);
    printf("\n%d",num);
    return 0;
}
int SumEven(int number){
    int sum = 0 ;
    for(int i = 1 ; i <= number ; i++){
        if(i % 2 == 0){
            sum += i ;
        }
    }
    return sum ;
}
