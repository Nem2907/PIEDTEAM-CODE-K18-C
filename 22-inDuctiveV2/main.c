#include <stdio.h>
#include <stdlib.h>
/*

*/
int main()
{

        int number ;
        char buffer ;
        do{
            printf("\n Enter number = ");
            scanf("%d", &number);
            scanf("%c", &buffer);
            if(buffer != 10){
                printf("\nNhap lai di ban eyyyyyyyyyyyyyyyyyyyyy");
            }
        }while(buffer != 10 || number < 1);

    float sum = 0;
    int s = 0 ;
    for(int i = 1 ; i <= number ; i++){
        s += i ;
        sum += 1.0/s ;
    }
    printf("Sum = %.2f",sum);
    return 0;
}
