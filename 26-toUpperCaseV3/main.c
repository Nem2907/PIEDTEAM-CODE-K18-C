#include <stdio.h>
#include <stdlib.h>
// 26-toUpperCaseV3
char toUpperCaseV3(void);
int main()
{
    char ch = toUpperCaseV3();
    printf("\n%c", toUpperCaseV3());
    return 0;
}
char toUpperCaseV3(void){
    char character ;
    printf("\nEnter Character = ");
    scanf("%c", &character);

    if( character >= 97 && character <= 122){
        character-=32 ;
    }
    return character ;
}


