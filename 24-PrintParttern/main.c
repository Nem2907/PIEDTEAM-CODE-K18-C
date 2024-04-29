#include <stdio.h>
#include <stdlib.h>
// 24-printParttern
/*
    nhập vào height , nhập vào width
    in ra màn hình
    vd : height = 5
         width = 7
    *******
    *     *
    *     *
    *     *
    *******


             *
            ***
           *****
          *******
         *********
        ***********
       *************

    tạo hình chéo + cây thông : full pyramid
*/
int main()
{
    int height ;
    int width ;
    printf("\nEnter height =");
    scanf("%d", &height);
    printf("\nEnter width =");
    scanf("%d", &width);

    for(int i = 1 ; i <= height ; i // in ra hàng ngang
        for(int j = 1 ; j <= width ; j++){ // in ra hàng dọc
            if(i == 1 || i == height || j == 1 || j == width){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
/*


*/
