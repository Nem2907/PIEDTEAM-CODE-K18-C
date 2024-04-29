#include <stdio.h>
#include <stdlib.h>
const int MAX = 1000 ;
/*
32-inputOutputArray
// hang so : ten : viet hoa , danh tu, snake _case
*/
int main()
{
    int arr[MAX]; // Tao ra  bien ten arr
    int size; // kich thuoc gia
    //InputArray
    printf("\nNhap di em = ");
    scanf("%d", &size);
    // nhap mang
    printf("\nNhap mang di ban = ");
    for(int i = 0 ; i <= size -1 ;i++){
        printf("\nNhap arr[%d] = ",i);
        scanf("\n%d", &arr[i]);
    }
    // in ra mang
    printf("\nMang ne : ");
    for(int i = 0 ; i <= size -1 ;i++){
        printf("%5d", arr[i]);
    }
    return 0;
}
