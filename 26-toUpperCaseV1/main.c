#include <stdio.h>
#include <stdlib.h>
// 26-toUpperCaseV1
void toUpperCaseV1(void);
int main()
{
    toUpperCaseV1();// call
    return 0;
}

void toUpperCaseV1(void){//build
    //input
    char ch ;
    printf("\nNhap ki tu di ban : ");
    scanf("%c", &ch);
    fflush(stdin);
    // process
    if( ch >= 97 && ch <= 122){
        ch -= 32 ;
    }
    // output
    printf("\n%c", ch);
}
