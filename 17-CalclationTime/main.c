#include <stdio.h>
#include <stdlib.h>
/*
    int s = 0;
    int m = 0;
    int h = 0;

    int number;
    printf("\nEnter number = ");
    scanf("%d",&number);

    for(int i = 1 ; i <= s;i++){ :
        s++;
        if(s==60){
            m++;
            m = 0 ;
        }
        if(m==60){
            h++;
            h = 0 ;
        }
    }
*/
int main()
{
    int number;
    printf("\nEnter number = ");
    scanf("%d",&number);
    if(number > 0) {
        // hour
        int hour = number / 3600;
        int h = number % 3600 ; // lấy phần dư
        // phút
        int minute = h / 60 ;
        // giây
        int second = h % 60 ;

        printf("%02d:%02d:%02d",hour, minute, second);
    }else{
        printf("\nInvaild time");
    }
    return 0;
}
