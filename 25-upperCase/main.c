#include <stdio.h>
#include <stdlib.h>
// 25-upperCase : nhập ký tự thường , biến thành hoa
int main()
{

    char ch;
    printf("\nNhap ky tu di : ");
    scanf("%c", &ch);
    fflush(stdin);
    if(ch >= 97 && ch <= 122){
         ch -=32 ;
    }
    printf("\nCh = %c",ch);

    return 0;
}
