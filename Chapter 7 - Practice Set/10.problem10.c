#include <stdio.h>
int sum(int arr[],int size);

int main(){

    int arr[5];
    printf("Welcome to the sum and average finder of an array\n");
    for(int i = 0; i<5;i++){
        printf("please enter %dth element ",(i+1));
        scanf("%d",&arr[i]);
     
    }
     int add = sum(arr,5);
        float average = add / 5.0;
        printf("the sum of array is %d\n",add);
        printf("the average of array is %.2f\n",average);
      return 0;
}
int sum(int arr[],int size){
    int addition = 0;
    for(int i = 0; i < size; i++){
        addition += arr[i];
    }
    return addition;
}