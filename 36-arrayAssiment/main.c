#include <stdio.h>
#include <stdlib.h>
/*
36-arrayAssiment/*
36-arrayAssiment : gán mảng , dán mảng
có ba dạng chính : cpyArray : sao chép mảng
            a = 10 ;
            b = 5 ;
            a = b ; pass by value : truyền giá trị để tham thảo
            // đây là mối quan hệ sao chép
            ==> a sao chép b
            a là thằng copy , a có thay đổi
            b là thằng bị copy , b ko thay đổi
                   concatArray : nối mảng
            sau khi xử lý arr1 = arr1 + arr2
concatArrayV1 : nhận vào arr1 , arr2 , arr3
    xử lý arr1  và arr2 ko đổi
    arr3 = arr1 + arr2

    b1 : xóa arr3
    b2 : nhét arr1 vào arr
    b3 : nhét vào arr3


    reverseArray : đảo mảng
     3 1 2 7 5
=>   5 7 2 1 3
    c1 : swap đối xứng , xác định trục giữa
    c2 : tmp , nhét ngược , copy
            Định lý : sao chép người khác là đánh mất chính mình

Xử lý : dán tương ứng  ,swap đối xứng
*/
const int MAX = 100 ;
void input(int arr[] , int* size);
// Nhập vào
void output(int arr[] , int size);
// in ra
void cpyArray(int arrS[] , int* sizeS,
              int arrM[] , int sizeM);
// copy V1
void cpyArrayV2(int arrS[] , int* sizeS,
              int arrM[] , int sizeM);
// copy V2
void concatArray(int arrS[] , int* sizeS,
              int arrM[] , int sizeM);
// Nối bản
void reverseArray(int arrS[] , int sizeS);
// đảo ngược
void reverseArrayV2(int arrS[] , int sizeS);

int main()
{
    int arr1[100] = {1,2,3,4,5,6};
    int size1 = 5;
    int arr2[100] = {3 , 4 , 7};
    int size2 = 3 ;

    printf("\nArr1 : ");
    output(arr1,size1);

    printf("\nArr2 : ");
    output(arr2,size2);

    concatArray(arr1,size1,arr2,size2);

    printf("\nSau reverse ne    : ");
    printf("\nArr1 : ");
    output(arr1,size1);
    printf("\nArr2 : ");
    reverseArrayV2(arr2,size2);

    return 0;
}


void reverseArrayV2(int arrS[] , int sizeS){
    for(int i = sizeS - 1 ; i >= 0 ; i--){
       printf("%5d", arrS[i]);
    }
}
void reverseArray(int arrS[] , int sizeS){

    for(int i = 0; i <=(sizeS / 2) - 1 ; i++){
        int temp = arrS[i];
        arrS[i] = arrS[sizeS - i - 1];
        arrS[sizeS - i - 1] = temp;
    }
}
void concatArray(int arrS[] , int* sizeS,
              int arrM[] , int sizeM){
    for(int i = 0 ; i <= sizeM - 1 ;i++){
        arrS[*sizeS] = arrM[i];// nhét
        (*sizeS)++; // lưu ý phải có dấu ()
    }
}
void cpyArrayV2(int arrS[] , int* sizeS,
              int arrM[] , int sizeM){
    // xóa thằng đi copy trước
    *sizeS = 0 ;
    for(int i = 0 ; i <= sizeM - 1 ;i++){
        arrS[*sizeS] = arrM[i];// nhét
        (*sizeS)++; // lưu ý phải có dấu ()
    }
}
void input(int arr[] , int* size){
    printf("\nEnter size = ");
    scanf("%d" , size);
    //nhìn thằng bị copy
    for(int i = 0 ; i <= *size - 1 ; i++){
        printf("\nArr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
}
void output(int arr[] , int size){
    printf("\nMang ne = ");
    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", arr[i]);
    }
}
void cpyArray(int arrS[] , int* sizeS,
              int arrM[] , int sizeM){
    // nhìn đối tượng muốn sao chép
    for(int i = 0 ; i <= sizeM - 1 ; i++){
        arrS[i] = arrM[i];
    }
     *sizeS = sizeM ;
}
// arrS sao chép arrM
