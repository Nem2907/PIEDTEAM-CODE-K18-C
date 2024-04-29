#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, end, sumodd = 0, sumeven = 0, countNumber = 0 ;

    printf("Enter Start and End");

    printf("\nStart = ");
    scanf("%d",&start);

    printf("\nEnd = ");
    scanf("%d",&end);

    if(start > end){
        int tmp = start ;
        start = end ;
        end = tmp ;
    }else{
        printf("So chan trong day la : ");
        for(int i = start ; i <= end; i++){ // in ra số chẳn
            if(i % 2 == 0 ){
                printf("%d ", i);
            }
        }

        for(int i = start ; i <= end; i++){ // tổng số lẻ
            if(i % 2 == 1 ){
                sumodd += i ;
            }
        }

        printf("\nTong so le la %d ",sumodd);

        for(int i = start ; i <= end; i++){ // đếm có bao nhiêu số
            countNumber++ ;
        }
        printf("\nTong so trong day la %d ",countNumber);

        for(int i = start ; i <= end; i++){ // tổng số chẳn
            if(i % 2 == 0 ){
                sumeven += i ;
            }
        }
        printf("\nTong so chan la : %d",sumeven);

        printf("\nSo Le trong day la : ");
        for(int i = start ; i <= end; i++){ // in ra số lẻ
            if(i % 2 == 1 ){
                printf("%d ", i);
            }
        }
    }
    return 0;
}
