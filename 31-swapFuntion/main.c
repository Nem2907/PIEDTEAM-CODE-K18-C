#include <stdio.h>
#include <stdlib.h>
/*
viet ham nhan vao 2 bien numa numb ,
ham co nhiem vu doi gia tri trong number
trong 2 bien tren
tren main : ta su dung ham tren
*/
void swap(int numa ,int numb);
void swapV2(int* numa ,int* numb);
int main()
{
    int numberA = 5 , numberB = 3 ;
    swapV2(&numberA,&numberB);
    printf("\nNumberA = %d",numberA);
    printf("\nNumberB = %d",numberB);
    return 0;
}
// đây là mối quan hệ pass by value : truyền tham trị ,trong hàm thay đổi
// tuy nhien, ngoài hàm ko bị ảnh hưởng
void swap(int numa ,int numb){
    int tmp = numa ;
    numa = numb ;
    numb = tmp ;

    printf("\n%d -- %d",numa, numb);
}
void swapV2(int* numa ,int* numb){
    int tmp = *numa ; // int tmp =  numberA
    *numa = *numb ; // numberA = numberB
    *numb = tmp ; // numberB = tmp
}

