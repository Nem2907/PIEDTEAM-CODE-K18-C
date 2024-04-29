#include <stdio.h>
#include <stdlib.h>

//comment : ghi chu

/*

cntt : xu ly thong tin bang cong nghe
luu tru --> xu ly -- bao cao
   I          P         O (report)

datatype : Kieu du lieu
ky tu       char    character   - 1 byte 'a' , '2' , '3', 'diep' --> 'p'
so nguyen   int     integer     - 4 byte 9 , 1999 , 17.9 --> 17
so thuc     float   float       - 4 byte 9 , 1999 , 17.9 --> 17.9
so thuc     double  long float  - 8 byte 9 , 17.9 , 1213213213213213131.132132132132131313132132123113
*/

// C la ngon ngu huong thu tuc
// procedure :tuan tu              sequence : dong chay
// dau nhac he args

int main()
{
    // luu tru
    //luu ky tu dau tien trong ten cua minh
    // B1 : xac dinh kieu du lieu : char
    // B2 : xac dinh ten --> dat ten cho co nghia
    //      su dung cu phap : cammelCase : Cu phap con lac. da`
    //      khong ky tu dac biet (tru $ _ )
    //      khong co so mo dau
    //      phai la danh tu nha :3
    //      = phep gan | assiment

    // tao vi'| ly | bien de luu
    char firstCharOfName = 'n' ;
    // luu tuoi cua minh
    int age = 19 ;
    // luu diem toan vua roi : point
    float pointMath =  9.75666 ;
    double score    =  9.86987 ;

    // xem da luu duoc gi ?
    // print format : in theo dinh dang , theo chuan
    printf(" Toi yeu Kim Chi lam :3 ");
    // in ra ky tu dau tien trong ten cua minh
    printf("\n Ky tu dau tien la %c ", firstCharOfName);
    // in ra tuoi cua ban
    printf("\n Tuoi cua tui ne %i", age);
    // in ra diem cua ban
    printf("\n Diem toan cc %.2f", pointMath);
    // in ra score
    printf("\n Diem score db %.2lf", score);
    // in ra dia chi bien age
    printf("\n Dia chi age : %u",&age);
    //ngoai le :
    int number = 'A';
    char ch = 66 ;

    printf("\nnumber ne %d",number);
    printf("\nch ne %c ",ch+32 );



    // tu duy lap trinh
    // tinh tong | thuong gia tri cua 2 bien so nguyen

    int numb1 = 10 ;
    int numb2 = 3 ;
    printf("\n%d + %d = %d",numb1 , numb2 , numb1 + numb2 );

    printf("\n%d * %d = %d ",numb1 , numb2 , numb1 * numb2 );
    float result = (float)numb1 / numb2 ;// ep kieu du lieu
    printf("\n%d / %d = %.2f ",numb1 , numb2 , result );

    // swap : hoan vi
    int number1 = 15 ;
    int sting = 10 ;
    int lộc = 10 ;
/*
    //b1 :
    int temp = sting ; // temp = 10
    //b2 :
    sting = number1 ; // sting = 15
    //b3 :
    number1 = temp ; // number1 = 10
*/
    sting = sting + number1 ; // sting 10 + 15  = 25
    number1 = sting - number1 ; // number1 25 - 15  = 10
    sting = sting - number1 ; // sting = 25 - 10 = 15

    printf("\n %d , %d ",number1 , sting);


    return 0;
}
// return 0 : tra ra 0 cho nguoi goi
// window nhan duoc 0  biet chuong trinh dung roi
// ASCII
//
// 0 :  '\0' = null : biết kiểu nhưng không biết giá trị
// 10 :' \n' = enter
// 32 :  ' '  =  space = void (Ko có gì cả )
// 47 : '/'
//
// 48 -> 57 : Begin 0 - 9
// 65 -> 90 : A - Z
// + 32 --> 97 -> 122 : a - z
//
//
//
//
