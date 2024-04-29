#include <stdio.h>
#include <stdlib.h>
/*
32-point
*/
int main()
{
    int tt = 200 ; // biến bình thường , lưu giá bình thường
    int* hari = &tt ;// biến pointer ,lưu địa chỉ của biến nó muốn điều khiển
    printf("\nValue tt = %d", tt);//200
    printf("\nAddress tt = %u", &tt);// 6422044
    printf("\nValue hari = %u", hari);//6422044
    printf("\nAddress hari = %u", &hari);//6422032
    printf("\nHook hari = %d", *hari);//200
    *hari -= 150;
    // đồng nghĩa là tt -=150;
    printf("\nValue tt = %d",tt);// 50
    return 0;
}
