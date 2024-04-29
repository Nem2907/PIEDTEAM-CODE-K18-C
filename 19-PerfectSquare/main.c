#include <stdio.h>
#include <stdlib.h>
/*
số chính phưởng là số : khi căn 2 số đó
ta sẽ được số nguyên
*/
int main() //  1 2 3 4 5 6 7
{
    /*
    int n ;
    printf("Enter number : ");
    scanf("%d",&n);

    for(int i = 0 ; i*i <= n ; i++){
        if( i*i == n ){
            printf("\n%d is Prefect number",n);
            return 0 ;
        }
    }
    printf("\n%d is no perfect number",n);
    return 0 ;
    */
    /*
    if(sqrt(number) == (int)(sqrt(number))){
        printf("\n%d la so chinh phuong",number);
        return 0;
    }
    printf("\n%lf is no perfect number",number);

    ví dụ : n = 10
    sqrt(10) = 3.1627
    int sqrt(10) = 3
    double sqrt(10) = 3.1627
    do đó nếu so sánh thì 3 != 3.1627

    ví dụ : n = 9
    sqrt(9) = 3
    int sqrt(3) = 3
    double sqrt(10) = 3.00000
    do đó nếu so sánh thì 3 == 3.0000
    */
    double number ;

    printf("Enter number : ");
    scanf("%lf",&number);

    double i = sqrt(number);

    if(number > 0){
        if(number == pow(i,2)){
            printf("\n%lf is Prefect number",number);
        }else{
            printf("\n%lf is no perfect number",number);
        }
    }else{
        printf("\nInvalid number");
    }
    return 0;
}


































