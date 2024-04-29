#include <stdio.h>
#include <stdlib.h>
//26-toUpperCaseV4
char toUpperCaseV4(char c);
int main()
{
    char ch ;
    printf("\nEnter Character = ");
    scanf("%c", &ch);

    ch = toUpperCaseV4(ch);// ch thay đổi vì ch hứng giá trị
    printf("\n%c" ,ch
           );
    return 0;
}
char toUpperCaseV4(char character){// build
    if(character >= 97 && character <= 122){
        character -= 32;
    }
    return character ;
}
