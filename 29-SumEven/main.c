#include <stdio.h>
#include <stdlib.h>
int isEven();
int main()
{
    int num = isEven();
    printf("\n%d" , num);
    return 0;
}
int isEven(){
    int n;
    printf("\nEnter number = ");
    scanf("%d",&n);
    return n % 2 == 0 ;
    // nếu nó chia hết ==> 1
    // còn không thì  ==> 0
}
