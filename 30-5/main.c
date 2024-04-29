#include <stdio.h>
#include <stdlib.h>

int TinhGiaiThua(int number);
int main()
{
    int n ;
    printf("\nEnter numebr = ");
    scanf("%d", &n);
    int result = TinhGiaiThua(n);
    printf("\nResult = %d", result);
    return 0;
}
int TinhGiaiThua(int number){
    int result = 1 ;
    for(int i = 1; i <= number ; i++){
        result *=i ;
    }
    return result ;
}
