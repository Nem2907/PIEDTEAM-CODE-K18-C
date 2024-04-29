#include <stdio.h>
#include <stdlib.h>
// If eles
// cấu trúc phân nhánh :

int main()
{
    /*
    if (conditional){
        command block ;
    }else if(conditional){
        command block ;
    }
    */
    int car = 5 ;
    printf("Sai gon ne");
    printf("\nCao Toc Lien Khuong");

    //gặp một biển báo

    if(car >= 7 ){
        printf("\nDi Pren ");
    }else if(car == 7 ){
        printf("\nDi Sacom");
    }else{
        printf("\nDi Mimosa");
    }

    printf("\nDat Lat");

    // nói riêng về điều khiện
    // comparision operator : toán tử so sánh
    // > < >= <=
    // == so sanh bang bang
    // != so sanh khac
    // Matheric operator : toán tử toán hạng
    // + - * / %
    // toán tử tăng
        int a = 5;
        a = a+2 ; //7
        a += 2; // 9
        a = a +1; // 10
        a += 1 ; // 11
        a ++; //12
        a = a+ 3 ; //15

    // coi video trên face
    //II - Logical operator : Toán tử logic
    //muốn đi bar thì cần gì ?
    //B1 : đủ tuổi , tuổi từ 18 tuổi trở lên
    //B2 : Tiền : Trên 300k

    int age = 25 ;
    int money = 11 ;
    /*
    if(age >= 18){
        if(money > 300){
            printf("\nWelcome");
        }else{
            printf("\Cut");
        }
    }else{
        printf("\nCut");
    }
    */
    // Senior :     && : And : tìm false , tìm được thì chốt false,
    //                      Không được thì kết luận true
    //              || or :  Tìm true , tìm được  thì chốt true ,
    //                      không tìm được thì kết luận false

    if(age >= 18 && money > 300 ){ // hoặc || or : phải thỏa 1 trong 2 , và && and : đồng thời
        printf("\nWelcome");
    }else{
        printf("\nCut");
    }

    a = 9 ;
    int b = 0 ;

    if(a == 10 & b++ > 2 ){     // với a = 10   dấu || là tìm true --> ngừng lại tại T --> a = 10 ; b = 0
                                //              dấu | là sẽ tìm true nhưng sẽ không ngừng  --> a= 10 ; b = 1 (do có b++ )
                                // Với a = 9    dấu && là tìm False --> dừng lại tại F --> a = 9 , b = 0
                                //              dấu & là sẽ tìm false nhưng sẽ không ngừng  --> a = 9 ; b = 1 (do có b++ )
        printf("\n True a = %d, b = %d", a, b);

    }else{
        printf("\n False a = %d , b = %d",a , b);
    }

// Em học tối T7 --> cho em xin video xem phần cuối cùng
// Xin mentor 03-evenodd
// Làm bài tập 04- và 05-

    return 0;
}
