#include <stdio.h>
#include <stdlib.h>
int SumAllElement(int number);
int SumAllElementV2(int number);
int main()
{
    int n ;
    printf("\nEnter number = ");
    scanf("%d", &n);
    int sum = SumAllElement(n);
    int sum1 = SumAllElementV2(n);
    printf("\nSum = %d", sum);
    printf("\nSum = %d", sum1);

    return 0;
}
int SumAllElementV2(int number){ // cách làm đệ quy
    // đệ quy : là hàm gọi chính nó
    if(number == 0) return 0 ;
    return number % 10 + SumAllElementV2(number / 10);
}
int SumAllElement(int number){
    int sum = 0 ;
    while(number > 0){
        int digit = number % 10 ;
        sum += digit ;
        number /= 10 ;
    }
    return sum ;
}
