const int MAX = 100 ;
// trung bình c?ng trong m?ng
float averageSum(int array[] , int size);
int main()
{
    int arr[6] = { 1 , 2 , 3 , 4 , 5 , 6};
//    float s = averageSum(arr,6);
	float sum = 0 ;
    int count = 0 ;
    int i = 0 ;
    for ( i = 0 ; i <= size - 1 ; i++){
        sum += array[i];
        count++;
    }
    printf("\n%f",sum)
    printf("\n%f",sum);
    return 0;
}
float averageSum(int array[] , int size){
    float sum = 0 ;
    int count = 0 ;
    int i = 0 ;
    for ( i = 0 ; i <= size - 1 ; i++){
        sum += array[i];
        count++;
    }
    sum = sum/(float)count;
    return  sum ;
}


