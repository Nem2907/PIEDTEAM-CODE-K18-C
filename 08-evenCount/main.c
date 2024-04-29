#include <stdio.h>
#include <stdlib.h>
// 08-countEven
// Nhập vào 2 số nguyên lần lượt là start và end
// in ra màn hình các số trong đoạn từ start đến end
//
int main()
{
    int start , end , sum = 0;

    printf("Enter Start and End");

    printf("\nStart = ");
    scanf("%d",&start);

    printf("\nEnd = ");
    scanf("%d",&end);

    if(start > end){ // khi nhập cà chớn
        int tmp = start ;
        start = end ;
        end = tmp ;
    }else{
        // tính tổng các số có trong đoạn trên
        for(int i = start ; i <= end; i++){
            sum += i;
        }
    }
        printf("\n%d", sum);


    return 0;
}
//Bài tập về nhà
/*
1 : Tạo project 08-workEvenCount
in ra màn hình các số chẳn trong đoạn
tính tổng các số lẽ trong đoạn
đếm xem có bao nhiêu số trong đoạn
đếm xem có bao nhiêu số chẳn trong đoạn
in ra màn hình các số lẽ trong đoạn
*/
