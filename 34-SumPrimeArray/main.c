#include <stdio.h>
#include <stdlib.h>
const int MAX = 100 ;
//SumPrime
void input(int arr[], int* size);
void output(int arr[], int size);
int isPrime(int number);
int sumPrime(int arr[], int size);
int main()
{
    int arr[MAX];
    int size ;
    input(arr, &size);
    output(arr,size);
    printf("\nSum = %d", sumPrime(arr,size));
    return 0;
}
int sumPrime(int arr[], int size){
    int sum = 0 ;
    for(int i = 0 ; i <= size - 1 ; i++){
        if(isPrime(arr[i])){
            sum += arr[i];
        }
    }
    return sum ;
}
/*
Làm hàm kiểm tra số nguyên tố
*/
int isPrime(int number){
    for(int i = 2 ; i <= number- 1 ;i++){
        if(number % i == 0){
            return 0 ;
        }
    }
    return number >= 2 ;
}
/*
int CheckPrime(int arr[], int size){
    int sumPrime = 0 ;
    for(int i = 0 ; i <= size-1; i++){
        if(arr[i] >= 2){
            int isPrime = 1 ;
            for(int j = 2 ; j <= arr[i]-1 ;j++){
                if(arr[i] % j == 0){
                    isPrime = 0 ;
                    break ;
                }
            }
            if(isPrime){
                sumPrime += arr[i];
            }
        }
    }
    return sumPrime;
}
*/
void input(int arr[], int* size){
    printf("\nEnter size = ");
    scanf("%d", size);
    for(int i = 0 ; i <= *size - 1 ; i++){
        printf("\nArr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
void output(int arr[], int size){
    for(int i = 0 ; i <= size - 1 ;i++){
        printf("%5d", arr[i]);
    }
}
