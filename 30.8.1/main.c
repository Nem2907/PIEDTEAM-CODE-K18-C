#include <stdio.h>
#include <stdlib.h>
/*Trung ngu :3
ham nhan vao start va end
tinh trung binh nhan cua cac so start nhan
*/
float geometric(int start , int end);
int main()
{
    printf("\n%f", (geometric(2,5));
    return 0;
}
float geometric(int start , int end){
    float result = 1 ;
    int count = 0 ;
    for(int num = start ; num <= end ; num++){
        result *= num ;
        count++;
    }
    return pow(result, 1.0/count);
}
