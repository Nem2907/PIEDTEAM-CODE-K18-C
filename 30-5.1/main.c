#include <stdio.h>
#include <stdlib.h>
/*
ham nhan vao n , return so fibonacci thu n
*/
int fibonacci(int n);
int fibonacciV2(int n);
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
    int num = fibonacci(n);
    printf("\n%d is %d", n, num);
    printf("\n%d", fibonacciV2(7));
    return 0;
}
int fibonacciV2(int n){
    if(n == 1 || n == 2){
        return 1 ;
    }
    return fibonacciV2(n-2)+fibonacciV2(n-1);
}

int fibonacci(int n){
    int prev = 0 ;
    int curr = 1 ;
    int result = 1 ;

    for(int i = 1 ; i <= n - 1; i++){
        result = prev + curr ;
        prev = curr ;
        curr = result ;
    }
    return result ;
}
