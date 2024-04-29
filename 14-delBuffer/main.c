#include <stdio.h>
#include <stdlib.h>
/*
14-delBuffer
nhập afe , và firstCharOfNAme , Rồi in ra màn hình

*/
int main()
{
    int age;
    char firstCharOfName;
    /*
    printf("\nEnter firstCharOfNAme = ");
    scanf("%c",&firstCharOfName);

    printf("\nEnter Age = ");
    scanf("%d",&age);
    */
    printf("\nEnter Age = ");
    scanf("%d",&age);

    fflush(stdin); // xóa buffer

    printf("\nEnter firstCharOfNAme = ");
    scanf("%c",&firstCharOfName);

    // in ra màn hình
    printf("\nAge %d", age);
    printf("\nfirstCharOfNAme %c",firstCharOfName);

    return 0;
}
