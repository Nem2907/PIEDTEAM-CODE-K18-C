#include <stdio.h>
#include <stdlib.h>
// 26-toUpperCase
void toUpperCaseV2(char character );
int main()
{
    char ch ;
    printf("\nEnter Character =");
    scanf("%c" ,&ch);
    fflush(stdin);

    toUpperCaseV2(ch);// tại đây sẽ dòng lệnh ẩn khi chạy xong
    // char character = ch ;
    // trong đó character : parameter . ch là argument
    // parameter : tham số . arguement : đối số
    // tham số là tham thảo giá trị của giá trị đó
    // đối số là đối chiếu giá trị của tham số đó
    // mối quan hệ của ch và character là pas by value
    // là truyền tham trị
    return 0;
}
void toUpperCaseV2(char character){
    if(character >= 97 && character <= 122){
        character -= 32 ;
    }
    printf("\n%c", character);
}
