#include <stdio.h>
#include <stdlib.h>
/*
giai thừa
    nhập n
    tính n!
    vd nhập n = 5
    tính kết quả 5! =1 120
    120 = 5*4*3*2*1
*/
int main()
{
    int prev = 0 ;
    int curr = 1 ;
    int result = 1; 
    
    int n ;
    printf("\nEnter number");
    scanf("%d",n);
    
    int i ;
    for(i = 1 ; i<= n-1;i++){
    	result = prev + curr ;
		prev = curr ;
		curr = result ;	
	}
	printf("\n%d", result);
}
/*
int n ;
    int sum = 1;
    printf("\nNhap n =");
    scanf("%d",&n);

    if(n < 0 ){
        printf("\n Me m ngu");
        return 0;
    }

    for(int i = 1 ; i <=n ; i++){
        sum *=i ;
    }

    printf("\nSum = %d",sum);
    return 0;
*/
