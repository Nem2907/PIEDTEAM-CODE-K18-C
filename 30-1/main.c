#include <stdio.h>
#include <stdlib.h>
int SumALL(int start , int end);
int main()
{
    int result = SumALL(6,2);
    printf("\nSum = %d", result);
    return 0;
}
int SumALL(int start , int end){
    int sum = 0 ;
    if(start > end ){
        int tmp = start ;
        start = end ;
        end = tmp ;
    }
    for(int num = start ; num <= end; num++){
        sum += num ;
    }
    return sum ;
}
