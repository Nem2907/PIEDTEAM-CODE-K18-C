#include <stdio.h>
#include <stdlib.h>
const int MAX = 100 ;
void input(int arr[], int *size);
void output(int arr[],int size);
/*
ở đây ko sài hàm void vì nếu sài thì nó sẽ ko thông báo đã làm chưa
9
*/
int insteadArray(int arr[] , int size ,
                int key ,int pos);
// thay thế
int insertArray(int arr[] , int* size ,
                int key ,int pos);
// thêm mảng
int deleteArray(int arr[] , int* size,
                int pos);
// xóa mảng
int CheckAnna(int arr[], int size);
//kiểm tra xem có phải mảng đối xứng hay không
{
    int arr[100] = {2,4,6,8,10};
    int size = 5 ;
    int pos , key ;
    printf("\nEnter pos = ");
    scanf("%d", &pos);

    printf("\nEnter key = ");
    scanf("%d", &key);

    if(insteadArray(arr,size,key,pos)){
        printf("\nMang sau khi thay doi");
        output(arr,size);
    }else{
        printf("\n vi tri ko hop le ");
    }

    int arr1[100] = {2,4,6,8,10};
    int size1 = 5 ;
    if(insertArray(arr1,&size1,key,pos)){
        printf("\nMang sau khi thay doi");
        output(arr1,size1);
    }else{
        printf("\n vi tri ko hop le ");
    }

    int arr2[100] = {2,4,6,8,10};
    int size2 = 5 ;
    if(deleteArray(arr2,&size2,pos)){
        printf("\nMang sau khi thay doi");
        output(arr2,size2);
    }else{
        printf("\n vi tri ko hop le ");
    }

    int arr3[100] = {2,3,4,3,2};
    int size3 = 5 ;
    if(CheckAnna(arr3,size3)){
        printf("\nDay la mang doi xung");
    }else{
        printf("\n ko phai mang doi xung ");
    }
    return 0;
}
int CheckAnna(int arr[], int size){
    for(int i = 0 ; i <= (size/2) - 1 ; i++){
        // so i với size - 1 - i
        if(arr[i] != arr[size - i - 1]){
            return 0;
        }
    }
    return 1 ;
}

int deleteArray(int arr[] , int* size,
                int pos){
    if(pos <0 || pos > *size-1){
        return 0 ;
    }
//size -2 nó tối ưu hóa được code

    for(int i = pos ;i <= *size - 2 ;i++){
        arr[i] = arr[i+1];
    }
    (*size)--;
    return 1 ;
}

int insertArray(int arr[] , int* size ,
                int key ,int pos){
    if(pos <0 || pos > *size-1){
        return 0 ;
    }
      for(int i = *size -1 ; i >= pos ; i--){
            arr[i+1] = arr[i];
        }
        (*size)++;
        arr[pos] = key;
        return 1 ;
}
int insteadArray(int arr[] , int size ,
                int key ,int pos){
    if( pos < 0 || pos >= size- 1 ){
        return 0 ;
    }
    for(int i = 0 ; i <= size - 1; i++){
        if(i == pos){
            arr[pos] = key;
            return 1 ;
        }
    }
}

void input(int arr[], int *size){
    printf("Enter size = ");
    scanf("%d", size);

    for(int i = 0 ; i<= *size - 1; i++){
        printf("\nArr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
}
void output(int arr[],int size){
    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d",arr[i]);
    }
}
/*
insteadArray : thay thế giá trị của một phần tử trong mảng
mô tả : f(arr[], pos, key)
vào trong mảng , ở vị trí pos , thay thế bằng giá trị k

arr 2 4 6 8 10
i   0 1 2 3 4
pos = 2  và key = 9
--->
arr 2 4 9 8 10

insertArray : nhét vào 1 số vào vị trí

deleteArray : xóa phần tử ở vị trí thứ pos trong mảng
mô tả :
f(arr[],pos)


CheckAnna : kiểm tra một mảng có phải là đối xứng ko
arr 2 3 4 3 2 : return 1 ;
arr 2 3 4 4 3 2 : return 1 ;
arr 2 3 4 2 3 return 0;
*/
