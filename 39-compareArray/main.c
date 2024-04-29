#include <stdio.h>
#include <stdlib.h>
/*
Bài 2: compareArray: so sánh mảng
    hàm nhận vào arr1[], arr2[]
    so sánh 2 mảng return 1 arr1 > arr2
                         -1 arr1 < arr2
                          0 arr1 == arr2
    arr1 2 1 5 7
    arr2 2 1 3 7 6 9 => arr1 lớn hơn => return 1
*/
const int MAX = 100 ;
void input(int arr[],int* size);
void output(int arr[], int size);
int compareArray(int arr1[], int size1 , int arr2[],int size2);
int main()
{
    int arr1[100] = {2,4,6,8,10};
    int size1 = 5;
    int arr2[100] = {2,4,6,8,10,9};
    int size2 = 6;
    int result = compareArray(arr1,size1,arr2,size2);

    if(result == 1){
        printf("Arr1 > Arr2");
    }else if(result == -1){
        printf("Arr1 < Arr2");
    }else if(result == 0){
        printf("Arr1 = Arr2");
    }
    return 0;
}
int compareArray(int arr1[], int size1 , int arr2[],int size2){
    //tìm kích thước bé nhất để làm việc so sánh
    // vì nếu lấy kích thước lớn hơn sẽ bị so sánh vs rác làm thay đổi giá trị
    int sizeM = size1 < size2 ? size1 : size2 ;
    //so sánh size1 với size2 , nếu mà true thì gán = size1 , còn ko thì gán = size2
    //cấu trúc : <Kiểu dữ liệu> <Tên biến> = <Điều kiện> ? giá trị 1 để gán : giá trị 2 gán ;
    for(int i = 0 ; i<= sizeM-1 ;i++){
        //duyệt mảng để so sánh các cặp giá trị
        if(arr1[i] > arr2[i]){
            return 1;
        }else if(arr1[i] < arr2[i]){
            return -1 ;
        }
    }
    // nếu xuống được đây ==> các cặp đều bằng nhau
    // nên phải so sánh qua kích thước
     if(size1 > size2){
            return 1 ;
        }else if(size1 < size2){
            return -1 ;
        }else{
            return 0 ;
        }
    return 0 ;
}
void input(int arr[],int* size){
    printf("\nEnter size =");
    scanf("%d", size);

    for(int i = 0 ; i <= *size - 1 ;i++){
        printf("\nArr[%d] = ", i);
        scanf("%d",&arr[i]);
    }
}
void output(int arr[], int size){
    for(int i = 0 ; i<= size - 1 ; i++){
        printf("%5d",arr[i]);
    }
}
