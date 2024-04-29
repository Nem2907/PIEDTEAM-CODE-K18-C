#include <stdio.h>
#include <stdlib.h>
const int MAX = 100 ;
void input(int arr[] , int* size);
void output(int arr[], int size);
void concatArray(int arr1[], int size1,
                 int arr2[], int size2,
                 int arr3[], int* size3);
void reveresArray(int arr[], int size);
void reveresArrayV2(int arr[], int size);
int main()
{

    int arr1[100] = {2 , 6, 9 , 1};
    int arr2[100] = {1 , 2 , 3 , 4 , 2};
    int arr3[100] = {3 , 8 , 9 , 0 , 9 , 3};
    int size1 = 4 ;
    int size2 = 5 ;
    int size3 = 6 ;
    printf("\nMang 1 ne = ");
    output(arr1,size1);
    printf("\nMang 2 ne = ");
    output(arr2,size2);
    printf("\nMang 3 ne = ");
    output(arr3,size3);
    printf("\n");
    concatArray(arr1,size1,arr2,size2,arr3,&size3);
    printf("\nMang thay doi ne = ");
    output(arr3,size3);
    printf("\nMang dao nguoc ne = ");
    reveresArray(arr1,size1);
    output(arr1,size1);
    return 0;
}// trên đây là main
void reveresArrayV2(int arr[], int size){
    // đi nửa vòng for thôi
    for(int i = 0 ; i <= (size/2)- 1 ; i++){
    // swap 2 thằng là i và size - i - 1
        int tmp = arr[i];
        arr[i] = arr[size - i - 1 ];
        arr[size - i - 1] = tmp ;
    }
}


void reveresArray(int arr[], int size){
    int arrayTMP[100];// tạo ra một mảng taml , ko có gì ở trong hết
    int sizeTMP = 0 ;
    // nhét array vào arrayTmp nhưng theo chiều ngược
    for(int i = size - 1 ; i >= 0 ;i--){
        arrayTMP[sizeTMP] = arr[i];
        sizeTMP++;
    }
    // sao chép arrTmp vào arr
    for(int i = 0 ; i <= sizeTMP - 1 ; i++){
        arr[i] = arrayTMP[i];
    }
    // không sao chép kích thước vì nó giống nhau rồi
}
/*
for(int i = 0; i <= (size/2)- 1; i++){
        int tmp = arr[i];
        arr[i] = arr[size - i - 1 ];
        arr[size - i - 1 ] = tmp ;
    }
*/
void concatArray(int arr1[], int size1,
                 int arr2[], int size2,
                 int arr3[], int* size3){
    *size3 = 0 ; // xóa mảng 3 để lưu kết quả
    for(int i = 0 ; i <= size1 - 1 ;i++ ){// nhét mảng 1 vào mảng 3
        arr3[*size3] = arr1[i];
        (*size3)++;
    }

    for(int i = 0 ; i <= size2 - 1 ;i++){// nhét mảng 2 vào mảng 3
        arr3[*size3] = arr2[i];
        (*size3)++;
    }
}
void input(int arr[] , int* size){
    printf("\nEnter size = ");
    scanf("%d", size);

    for(int i = 0 ; i <= *size - 1 ;i++){
        printf("\nEnter Arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
void output(int arr[], int size){
    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", arr[i]);
    }
}
/*
37-array asssimentWork
concatArrayV1 : noi mang
ham nhan vao mang 1 , mang 2 , mang 3
    sau khi xu ly , mang 1 mang 2 ko doi
    mang 3 thay doi
reverseArray : đảo ngược mảng
c1 : nhét
*/
