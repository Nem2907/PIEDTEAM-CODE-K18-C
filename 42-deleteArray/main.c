#include <stdio.h>
#include <stdlib.h>
/*
42-deleteArray
//  xóa hết phần tử thỏa:
//  hàm nhận vào 1 mảng , key
//  x1g
//  => tìm phần tử trong mảng và delete
//  f([3,1,2,3,5,4,3,6], 3) => [1,2,5,4,6]
//  đánh dấu vòng lập(loop, while)
//   C1: hàm delete
//      duyệt arr tìm arr[i] == 3
//      gọi hàm delete xóa phần từ i1
//   C2: arr : [3,1,2,3,5,4,3,6]
//       tmp :
//      nhét arr vào tmp trừ arr[i] == 3
//      cpy tmp vào arr

43-delete duplicate
//hàm nhận vào 1 mảng
//removeDuplicate: xóa trùng
//   => k còn phần tử nào trùng cả
//   2, 1, 3, 5, 2, 4, 5, 3 => 2 1 3 5 4
//  cách 1:
//  => tìm phần tử trong mảng, copyArray, Nhét
//  arr: 2, 1, 3, 5, 2, 4, 5, 3
//  tmp:
//  duyệt mảng arr xem arr[i]
//      có tồn tại trong tmp k
//      nếu arr[i] k tồn tại trong tmp
//        thì nhét arr[i] vào

//  cách 2:
//  => tìm kiếm, count, delete
//  arr: 2, 1, 3, 5, 2, 4, 5, 3

44- insert Array
nhét 1 mảng khác vào 1 mảng gốc ở vị trí nào đó
//hàm nhận vào arrMain, arrSub, pos
//-> nhét sub vào main ở vị trí pos
//=> ứng dụng insert| nhét
    //arr: 2 4 6 8
    //i  : 0 1 2 3  size:4

    //sub: 1 3 5 size: 3  pos: 1



*/
const int MAX = 100 ;
void input(int arr[], int* size);
void output(int arr[], int size);
int removeKeyInArray(int arr[] ,int* size , int key);
int removeKeyInArrayV2(int arr[] ,int* size , int key);
void deleteElementByPos(int arr[], int* size, int pos);//hàm xóa
int search(int arr[],int size,int key); // hàm tìm kiếm
int deleteDuplicate(int arr[], int* size);
int deleteDuplicateV2(int arr[], int* size);
void insertArrayIntoArray(int arr[], int *size ,
                          int arrSub[],int sizeSub,
                          int pos);

int main()
{
    int arr[] = {2,3,3,3,3,3,5,3,8,7}; // 20 byte
    //  int arr[] = {2,4,6,8,12,14,16}; // 28 byte
    //  nếu để arr[] như vầy thì tự khắc là sẽ tự đếm
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("\nMang ne : ");
    output(arr,size);
    /*
    int result = removeKeyInArrayV2(arr,&size,3);
    printf("\nDa xoa %d phan tu",result);
    output(arr,size);
    return 0;
    */

    int result = deleteDuplicateV2(arr,&size);
    printf("\nDa xoa %d phan tu trung",result);
    output(arr,size);

    printf("\n");
    int arr1[] = {2,4,6,8};
    int size1 = 4 ;
    int arr2[] = {10,12,14,16};
    int size2 = 4 ;
    insertArrayIntoArray(arr1,&size1,arr2,size2,2);
    output(arr1,size1);
    return 0 ;
}
//trên là main
void insertArrayIntoArray(int arr[], int *size ,
                          int arrSub[],int sizeSub,
                          int pos){
    for(int i = *size - 1 ; i >= pos ; i--){
        arr[i+sizeSub] = arr[i];
    }
    (*size) += sizeSub;
    // nhét sub vào chỗ trống
    for(int i = 0  ; i<= sizeSub - 1; i++){
        arr[pos + i] = arrSub[i];
    }
}



int deleteDuplicateV2(int arr[], int* size){
    int count = 0 ;

    for(int i = 0 ; i <= *size - 2 ;i++){
        for(int j = i + 1 ; j <= *size - 1 ;j++){
            if(arr[i] == arr[j]){
                deleteElementByPos(arr,size,j);
                j--;// lùi lấy đà
                count++;
            }
        }
    }
    return count;
}

int deleteDuplicate(int arr[], int* size){
    int arrTmp[MAX];
    int sizeTMP = 0 ;
    int count = 0 ;
    for(int i = 0 ; i <= *size - 1; i++){
            //kiểm xem trong arrTmp có hay ko
            // nếu ko có thì để vào
        if(search(arrTmp,sizeTMP,arr[i]) == -1){
            arrTmp[sizeTMP] = arr[i];
            sizeTMP++;
        }else{ // còn có thì đếm , ko có nhét
            count++;
        }
    }
    for(int i = 0 ; i <= sizeTMP - 1 ;i++){
        arr[i] = arrTmp[i];
    }
    (*size) = sizeTMP;
    return count;
}

/*Hàm tìm kiếm giá trị có tồn tại ở trong mảng hay ko*/
int search(int arr[],int size,int key){
    for(int i = 0 ; i <= size - 1; i++){
        if(arr[i] == key){
            return i ;
        }
    }
    return -1 ;
}

/*hàm xóa phần tử ở vị trí pos được chọn */
void deleteElementByPos(int arr[], int* size, int pos){
    //size - 2 là hiệu năng cao nhất
    for(int i = pos ; i <= *size -1 ; i++){
        arr[i] = arr[i+1];
    }
    (*size)--;
}

int removeKeyInArrayV2(int arr[] ,int* size , int key){
    int count = 0;
    for(int i = 0 ; i <= *size - 1 ; i++){
        if(arr[i] == key){
            deleteElementByPos(arr,size,i);
            i--;// lùi để lấy đà để tránh xóa thiếu
            count++; // đếm pt bị xóa
        }
    }
    return count;
}

int removeKeyInArray(int arr[] ,int* size , int key){
    int arrTmp[100];
    int sizeTmp = 0 ;
    int count = 0 ;
    // duyệt mảng array
    for(int i = 0 ; i <= *size - 1 ; i++){
        //xét điều kiện cho key
        if(arr[i] != key){ // nếu khác key
            //nhét vào arrTmp
            arrTmp[sizeTmp] = arr[i];
            sizeTmp++;
        }else{
            //nếu là key thì đếm để đưa số phần tử đã xóa
            count++;
        }
    }
    //array copy tmp
    for(int i = 0 ; i <= sizeTmp - 1; i++){
        arr[i] = arrTmp[i];
    }
    *size = sizeTmp ;
    //ném ra số phần tử đã xóa
    return count;
}

void input(int arr[],int* size){
    printf("\nEnter size = ");
    scanf("%d", size);

    for(int i = 0 ; i <= *size -1 ; i++){
        printf("\nArr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void output(int arr[],int size){
    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%5d", arr[i]);
    }
}
