#include <stdio.h>
#include <stdlib.h>
/*
viet ham xin nguoi dung
in ra man hinh cac so le trong khoang 1 den n
*/
void printOdd(void);
int main()
{
    printOdd();
    return 0;
}
void printOdd(void){
    int n;
    printf("\nNhap n di ban ");
    scanf("%d", &n);

    for(int i = 1 ; i <= n ; i++){
            //neu i % 2 != 0 thi lay ca so am
        if(i % 2 == 1){
            printf("%5d", i);
        }
    }
}
