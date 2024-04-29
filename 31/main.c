#include <stdio.h>
#include <stdlib.h>
void swapFunction(int *a , int *b);
int main()
{
    int a , b ;
    printf("\nEnter a = ");
    scanf("%d", &a);
    printf("\nEnter b = ");
    scanf("%d", &b);
    printf("\n%d - %d",a,b);
    swapFunction(&a,&b);


    printf("\n%d - %d ",a,b);
    return 0;
}
void swapFunction(int *a , int *b){
    int tmp = *a ;
    *a = *b ;
    *b = tmp ;
}
