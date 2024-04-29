#include <stdio.h>
#include <stdlib.h>
// Kiểm tra số nguyên tố
/*
12-checkPrime
+nhập số n
+kiểm xem n có phải số nguyên tố ko
+số nguyên tố là số chia hết cho 1 và chính nó

nếu từ 2
9  2 3 4 5 6 7 8 9

phải học --> vì tuần 7 có trong đề thi
Coi bài fibonacci --> ở video

*/
int main()
{
    int n;
    int count = 0;
    printf("\nNhap n = ");
    scanf("%d", &n);

    /*
    if(n < 2){
        printf("Day ko phai so nguyen to");
    }else{
        for(int i = 1 ; i <= n; i++){
        if (n % i == 0 ){
            count++;
            }
        }

        if(count == 2){
            printf("Day la so nguyen to");
        }else{
            printf("Ko phai la so nguyen to");
        }
    }
    return 0;
    */
    /*
    if(n < 2){
        printf("Day ko phai so nguyen to");
    }else{
        for(int i = 2 ; i < n-1; i++){
            if(n % i == 0){
                count++;
            }
        }

        if(count == 0 ){
            printf("Day la so nguyen to");
        }else{
            printf("Day ko la so nguyen to");
        }
    }
    */

    if( n >= 2 ){
        for(int i = 2 ; i <= n-1 ; i++){
            // Cho chạy từ 2 đến tiệm cận của số cần tìm
            if(n % i == 0){
                printf("%d ko la so nguyen to",n); // ko phải là số nguyên tố
                return 0 ; // kết thúc vì nếu ko thì nó sẽ chạy tiếp
            }
        }
        printf("%d la so nguyen to", nz);
    }else{
        printf("\n%d Ko phai la so nguyen to",n);
    }
    return 0 ;
}
