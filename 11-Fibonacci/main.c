#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prev = 0 ;
    int curr = 1 ;
    int result = 1 ;

    int n ;
    printf("\n Nhap n = ");
    scanf("%d",&n);//6
//              5    5
    for(int i = 1 ; i <= n-1 ;i++){
        result = prev + curr ; // = 8
        prev = curr ;// = 5
        curr = result ;// = 8
    }

    printf("\n gia tri tai vi tri %d la %d", n ,result);
    return 0;
}

