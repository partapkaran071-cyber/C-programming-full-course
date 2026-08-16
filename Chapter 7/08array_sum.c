#include <stdio.h>
int array_sum(int arr[],int size);


int main(){
    int marks[]={99,64,36,88,67};
    int size =sizeof(marks) / sizeof (marks[0]);
    int total = array_sum(marks,size);
    printf("the sum of the array element is %d",total);


    return 0;
}
int array_sum(int arr[],int size){
    int sum = 0;
     for(int i=0;i<size;i++){
       sum+=arr[i];
    }
    return sum;
}