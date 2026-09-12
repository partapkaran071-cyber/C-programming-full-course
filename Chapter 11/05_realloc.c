#include <stdio.h>
#include <stdlib.h>

int main(){
   int *arr=(int*)calloc(2,sizeof(int));
    if (arr==NULL){
        printf("Not enough memory ");
       return 1;
    }
    printf("Address of arr is %p\n",arr);
    arr[0]=99;
    arr[1]=100;

    arr = (int*)realloc(arr,3*sizeof(int));
    if (arr==NULL){
        printf("Not enough memory \n");
       return 1;
    }
    printf("NewAdress of arr is %p \n",arr);
    printf("The original elements are %d and %d ",arr[0],arr[1]);

    return 0;
}