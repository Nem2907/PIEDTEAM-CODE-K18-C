#include <stdio.h>
#include <stdlib.h>
// find Min Max Array
const int MAX = 100 ;
void input(int arr[], int* size );
void output(int arr[], int size);
int findMax(int arr[], int size);
int findMin(int arr[], int size);
int main()
{
    int arr[MAX];
    int size ;
    input(arr,&size);
    printf("\nMang ne em : ");
    output(arr,size);
    printf("\nMax = %d , Min = %d", findMax(arr,size),findMin(arr,size));
    return 0;
}
void input(int arr[], int* size ){
    printf("\nEnter size = ");
    scanf("%d", size);
    for(int i = 0 ; i <= *size - 1 ; i++){
        printf("\nArr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
void output(int arr[], int size){
    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", arr[i]);
    }
}
int findMax(int arr[], int size){
    int max = arr[0] ;
    for(int i = 0 ; i <= size -1 ;i++){
        if(arr[i] > max ){
            max = arr[i];
        }
    }
    return max ;
}
int findMin(int arr[], int size){
    int min = arr[0] ; // tin anh đầu tiên là bé nhất
    for(int i = 0 ; i <= size - 1 ; i++){
        //duyệt mảng ==> đi qua từng arr[i] trong mảng
        if(arr[i] < min ){// nếu có anh nào < min
            min = arr[i];
            // gán min = arr thứ i
            // ==> tin anh đó bé nhất
        }
    }
    return min ;
}
