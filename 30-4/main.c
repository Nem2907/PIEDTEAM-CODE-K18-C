#include <stdio.h>
#include <stdlib.h>
int Fibonacci(int number);

int main()
{
    int n ;
    printf("\nEnter number = ");
    scanf("%d", &n);
    int result = Fibonacci(n);
    printf("\nO vi tri %d co gia tri = %d", n , result);
    return 0;
}
int Fibonacci(int number){
    int prev = 0 ;
    int curr = 1 ;
    int result = 1 ;

    for(int i = 1 ; i < number ; i++){
        result = prev + curr ;
        prev = curr ;
        curr = result ;
    }
    return result ;
}
