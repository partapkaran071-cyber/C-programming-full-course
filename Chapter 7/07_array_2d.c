#include <stdio.h>

int main()
{
    int arr[2][3];
    int sum = 0;
    for(int row = 0; row < 2; row++ ){
        for(int col = 0;  col < 3; col++){
            printf("Enter the value at arr[%d][%d]",row,col);
            scanf("%d",&arr[row][col]);
            sum += arr[row][col];
        }
    }
    for(int row = 0; row < 2; row++ ){
        for(int col = 0;  col < 3; col++){
            printf("the value at  arr[%d][%d] is = %d\n ",row,col,arr[row][col]);
        }
    }
    printf("the sum of total array elemts are = %d\n",sum);


    return 0;
    }