#include <stdio.h>
#include <stdlib.h>
float averageSum(int arr[], int size );
void input(int arr[], int *size );
void output(int arr[], int size);
int sumEven(int arr[], int size);
int sumEvenIndex(int arr[], int size);
int sumPrime(int arr[], int size);
int findMax(int arr[], int size);
int main()
{
    int arr[9] = {6 , 9 , 11 , 7 , 3 , 2 , 4 , 8 , 13};

    printf("\nTrung binh cong = %.2f", averageSum(arr,9));
    printf("\nTong gia tri chan = %d", sumEven(arr,9));
    printf("\nTong vi tri chan la = %d", sumEvenIndex(arr,9));
    printf("\nTong cac so nguyen to = %d", sumPrime(arr,9));
    printf("\nSo lon nhat trong mang la = %d", findMax(arr,9));
    return 0;
}
// Kiếm số lớn nhất trong mảng
int findMax(int arr[], int size){
    int max = 0 ;
    for(int i =0 ; i<= size - 1 ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max ;
}
// Tính tổng các số nguyên tố trong mảng
int sumPrime(int arr[], int size){
    int sum = 0 ;
    for(int i = 0 ; i <= size - 1 ;i++){
        if(arr[i] >= 2){
            int isPrime = 1 ;
            for(int j = 2 ; j <= arr[i]- 1 ; j++){
                if(arr[i] % j == 0){
                    isPrime = 0 ;
                    break;
                }
            }
            if(isPrime){
                sum += arr[i];
            }
        }
    }
    return sum ;
}
// tổng các vị trí chẳn trong mảng
int sumEvenIndex(int arr[], int size){
    int sum = 0 ;
    for(int i = 0 ; i <= size - 1; i++){
        if(arr[i] % 2 == 0){
            sum += i ;
        }
    }
    return sum ;
}
// Tổng số lẻ trong mảng
int sumEven(int arr[], int size){
    int sum = 0 ;
    for(int i = 0 ; i <= size - 1 ; i++){
        if(arr[i] %  2 == 0 ){
            sum+= arr[i];
        }
    }
    return sum ;
}
// Trung bình cộng các số lẻ trong mảng
float averageSum(int arr[], int size ){
    int sum = 0 ;
    float count = 0 ;
    for(int i = 0 ; i <= size - 1 ;i++ ){
        sum += arr[i];
        count++;
    }
    return sum /(float)count ;
}
