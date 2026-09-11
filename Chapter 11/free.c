#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    printf("enter the size of element ");
    scanf("%d",&size);

    int *arr=(int*)malloc(sizeof(int)*size);

    if (arr==NULL){

        printf("Not enough memory ");
       return 1;
    }
    for(int i = 0; i < size; i++){
        printf("Enter the elements number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    int sum = 0;
     for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    free(arr);
    arr=NULL;
    printf("the sum of all element is %d",sum);
    return 0;
}
