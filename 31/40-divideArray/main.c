#include <stdio.h>
#include <stdlib.h>
/*
divideArray : tách mảng

divideArrayV1(arrM[] , pos , arrSub[])
pos : vị trí để tách
1 khúc ở lại arrMain
1 khúc ở arrSub
*/
const int MAX = 100;
void input(int arr[], int* size);
void output(int arr[], int size);
void divideArrayV1(int arr[], int *size ,
                 int pos ,
                 int arrSub[] ,int *sizeSub);
void divideArrayV2(int arr[], int size,
                   int pos,
                   int arrSub1[], int *sizeSub1,
                   int arrSub2[], int *sizeSub2);
int main()
{
    int arrM[100] = {2 , 4 , 6 , 8 , 10};
    int size1 = 5 ;
    int arrSub1[100] = {9 , 3 , 7};
    int sizeSub1 = 3 ;
    int arrSub2[100] = {5 , 9 , 8 , 8 };
    int sizeSub2 = 4 ;
    //divideArrayV1(int arr[], int *size ,int pos ,int arrSub[] ,int *sizeSub);
    divideArrayV2(arrM,size1,2,arrSub1,&sizeSub1,arrSub2,&sizeSub2);

    output(arrM,size1);
    printf("\nMang Arr1");
    output(arrSub1,sizeSub1);
    printf("\n");
    output(arrSub2,sizeSub2);
    return 0;
}
void divideArrayV2(int arr[], int size,
                   int pos,
                   int arrSub1[], int *sizeSub1,
                   int arrSub2[], int *sizeSub2){
    // xóa mảng
    *sizeSub1 = 0 ;
    *sizeSub2 = 0 ;
    // nhét khúc đầu (0 - pos) vào arrSub1
    for(int i = 0 ; i <= pos - 1; i++){
        arrSub1[*sizeSub1] = arr[i];
        (*sizeSub1)++;
    }
    // nhét khúc sau (pos - (size - 1)) vào arrSub2
    for(int j = pos ; j <= size - 1 ;j++){
        arrSub2[*sizeSub2] = arr[j];
        (*sizeSub2)++;
    }
}
//22041999
// học lại cách nhét mảng !
void divideArray(int arr[], int* size,
                 int pos ,
                 int arrSub[],int* sizeSub){
    *sizeSub = 0 ; //  xóa mảng sub , chuẩn bị lưu phần bị cắt
    //nhét từ pos đến hết arrMain vào arrSub
        for(int i = pos ; i <= *size -1 ;i++){
            arrSub[*sizeSub] = arr[i];
            (*sizeSub)++;
        }

    *size = pos ;
}

void input(int arr[], int* size){
    printf("\nEnter size = ");
    scanf("%d", size);

    for(int i = 0 ; i <= *size - 1 ; i++){
        printf("\nArr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}
void output(int arr[], int size){
    for(int i = 0; i<= size - 1 ;i++){
        printf("%5d", arr[i]);
    }
}
