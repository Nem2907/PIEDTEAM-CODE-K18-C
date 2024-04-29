#include <stdio.h>
#include <stdlib.h>
/*
35-getMul2NumberHigh : tìm tích lớn nhất của 2 số bất kì trong mảng
*/
const int MAX = 100;
void input(int arr[] , int *size);
void output(int arr[], int size);
int getMul2NumberHigh(int arr[], int size);//malloc
int main()
{
    int arr[MAX];
    int size = 0 ;
    input(arr,&size);
    output(arr,size);
    printf("\n%d",getMul2NumberHigh(arr,size));
    return 0;
}
int getMul2NumberHigh(int arr[], int size){
    // giả định arr[1] * arr[0] là số lớn nhất
    int max = arr[0] * arr[1];
    for(int i = 0 ; i <= size - 2 ; i++){
        // tìm xem có thằng nào lớn hơn ko

        for(int j = i + 1; j <= size - 1 ;j++){
            if(  arr[i] * arr[j] > max){
                max = arr[i] * arr[j];
            }
        }
    }
    return max ;
}
void input(int arr[] , int *size){
    printf("\nEnter size = ");
    scanf("%d", size);

    for(int i = 0 ; i <= *size - 1 ; i++){
        printf("\nArr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
void output(int arr[], int size){
    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", arr[i]);
    }
}
