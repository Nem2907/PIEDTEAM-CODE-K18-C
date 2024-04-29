#include <stdio.h>
#include <stdlib.h>
/*
38-findArray
: find first index : tìm vị trí đầu tiên của key trong mảng
hàm nhận vào 1 mảng array , hàm nhận thêm key
tìm vị trí đầu tiên phát hiện key
-find list index:
tìm  các vị trí xuất hiện key trong mảng
nhận vào 1 mảng arr, size và key , 1 mảng arrR để lưu vị trí
hàm này tìm các vị trí xuất hiện
key bên trong arr và lưu vào arrR

*/
void input(int arr[],int* size);
void output(int arr[], int size);
int findArray(int arr[], int size , int key);
void findListIndex(int arr[], int size , int key, int arrR[], int *sizeR);
int main()
{
    int arr[100];
    int size ;
    input(arr,&size);
    output(arr,size);

    if(findArray(arr,size,5) != -1){
        printf("\nFound in %d", findArray(arr,size,5));
    }else{
        printf("\nNot found key");
    }
    int arrayResult[100] = {1,2,3,4,5,6,7,8,9,10};
    int sizeResult = 10;
    findListIndex(arr,size,6,arrayResult,&sizeResult);
    if(sizeResult == 0){
        printf("\nNot founf !");
    }else{
        printf("\nAll position found : ");
        output(arrayResult,sizeResult);
    }
    return 0;
}
void findListIndex(int arr[], int size , int key, int arrR[], int *sizeR){
    *sizeR = 0 ;
    for(int i = 0 ; i <= size - 1 ; i++){
        if(arr[i] == key){
            arrR[*sizeR] = i;
            (*sizeR)++;
        }
    }
}

int findArray(int arr[], int size , int key){
    // duyệt mảng
    for(int i = 0 ; i <= size - 1 ; i++){
        if(arr[i] == key ){ // nếu có thằng nào bằng key
            return i; // lập tức ném ra vị trí
        }
    }
    return -1 ;// nếu tìm như chó mà ko có thì ném -1
}
void input(int arr[],int* size){
    printf("\nEnter size = ");
    scanf("%d", size);

    for(int i = 0 ; i <= *size - 1 ; i++){
        printf("Arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
void output(int arr[], int size){
    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", arr[i]);
    }
}
