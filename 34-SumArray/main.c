#include <stdio.h>
#include <stdlib.h>
const int MAX = 100 ; // hang so
/*
34- Sum Array
*/
void input(int arrF[], int* sizeF);
void output(int arrF[], int sizeF);
int SumArray(int arrF[], int sizeF);
float avgArray(int arr[], int size);
//sumEvenInArray
int sumEven(int arr[], int size);
//sumEvenIndexArray
int sumEvenIndex(int arr[], int size);
//sumIndexEvenInArray: tinh tong cac gia tri o vi tri chan
int sumIndexEvenInArray(int arr[], int size);
int main()

{
    int arrMain[MAX]; // tao ta 100 bien ten arrMain
    int sizeMain;// kich thuoc ng dung su dung
    input(arrMain,&sizeMain);
    output(arrMain,sizeMain);
    int sum = SumArray(arrMain,sizeMain);
    float sum1 = avgArray(arrMain,sizeMain);
    printf("\nSum = %d",sum);
    printf("\nSum = %.2f", sum1);
    printf("\nSum = %d", sumEven(arrMain,sizeMain));
    printf("\nSum = %d", sumEvenIndex(arrMain,sizeMain));
    printf("\nSum = %d", sumIndexEvenInArray(arrMain,sizeMain));
    return 0;

}
int sumIndexEvenInArray(int arr[], int size){
    int sum = 0;
    for(int i = 0 ; i<= size - 1 ; i++){
        if(i % 2 == 0 ){
            sum += arr[i];
        }
    }
    return sum;
}
int sumEvenIndex(int arr[], int size){
    int sum = 0;
    for(int i = 0 ; i <= size - 1 ; i++){
        if(arr[i] % 2 ==0){
            sum += i;
        }
    }
    return sum ;
}
int sumEven(int arr[], int size){
    int sum = 0;
    for(int i = 0 ; i <= size - 1 ;i++){
        if(arr[i] % 2 == 0){
            sum+= arr[i];
        }
    }
    return sum ;
}
float avgArray(int arr[], int size){
    float sum = 0 ;
    for(int i = 0 ; i <= size - 1 ; i++){
        sum += arr[i];
    }
    return sum/(float)size;
}
int SumArray(int arrF[], int sizeF){
    int sum = 0 ;
    for(int i = 0 ; i <= sizeF - 1 ;i++){
        sum += arrF[i];
    }
    return sum ;
}
void output(int arrF[], int sizeF){
    for(int i = 0 ; i <= sizeF - 1 ; i++){
        printf("%5d", arrF[i]);
    }
}
void input(int arrF[], int *sizeF){
    printf("\nEnter Size = ");
    scanf("%d", sizeF);
    for(int i = 0 ; i <= *sizeF-1 ; i++){
        printf("\nEnter arr[%d] = ", i);
        scanf("%d", &arrF[i]);
    }
}
/*
con tro
gia tri : *ten
dia chi : ten
*/

