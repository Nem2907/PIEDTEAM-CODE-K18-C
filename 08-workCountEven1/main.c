#include <stdio.h>
#include <stdlib.h>
//Bài tập về nhà
/*
1 : Tạo project 08-workEvenCount
in ra màn hình các số chẳn trong đoạn
tính tổng các số lẽ trong đoạn
đếm xem có bao nhiêu số trong đoạn
đếm xem có bao nhiêu số chẳn trong đoạn
in ra màn hình các số lẽ trong đoạn
*/

int main()
{
    int start, end ;
    int sumodd = 0; // initial Value : giá trị khởi tạo
    int sumeven = 0 ;
    int count = 0 ;
    int countEven = 0;

    printf("\nEnter Start = ");
    scanf("%d",&start);

    printf("\nEnter End = ");
    scanf("%d",&end);

    if(start > end ){
        int tmp = start ;
        end = start ;
        end = tmp ;
    }else{
        // in ra màn hình các số chẳn trong chẳn
        printf("\nSo chan la : ");
        for(int i = start ; i <= end; i++){
            if(i % 2 == 0){
                printf(" %d",i);
            }
        }

        // tính tổng các số lẻ có trong đoạn
        for(int i =  start ; i <= end ; i++){
            if(i % 2 != 0){ // cho trường hợp khác 0 ==> != 0
                sumodd += i ;
            }
        }
        printf("\nTong so le la = %d",sumodd);

        // đếm xem có bao nhiêu số trong đoạn
        for(int i = start ; i <= end ; i++){
            count++ ;
        }
        printf("\nTong so trong doan la = %d",count);

        // đếm xem có bao nhiêu số chẳn trong đoạn

        for(int i = start ; i <= end ; i++){
            if(i % 2 == 0){
                countEven +=1 ;
            }
        }
        printf("\nTong so chan trong doan la = %d",countEven);

        // in ra màn hình số lẽ trong đoạn
        printf("\nSo le la : ");
        for(int i = start ; i <= end ; i++){
            if(i % 2 != 0){
                printf(" %d ",i);
            }
        }
    }
    return 0;
}
