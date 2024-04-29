#include <stdio.h>
#include <stdlib.h>
/*
Ép người dùng nhập chữ thường
97 - 122
*/

int main()
{
    char ch;
    char buffer ;

    do{
        printf("\nEnter words");
        scanf("%c", &ch);
        fflush(stdin);
        if(ch < 97 || ch > 122){
            printf("\nNhap lai di ban oi !");
        }
    }while(ch < 97 || ch > 122);
    // ép người dùng nhập trong khoảng 97 đến 122
    printf("\n %d %c &o", ch, ch, ch);
    return 0;
}
