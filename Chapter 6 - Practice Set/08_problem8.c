#include <stdio.h>
void min_max(int* , int* , int * , int *);

int main(){
    int first,second,min,max;

    printf("please enter your first number\n");
    scanf("%d",&first);
     printf("please enter your second number\n");
    scanf("%d",&second);
    min_max(&first,&second,&min,&max);
    printf("Between %d and %d\n The maximum value is %d\n The minimum value is %d",first,second,max,min);


    return 0;
}
void min_max(int*a, int*b , int *Min, int *Max){
if(*a<*b){
    *Min=*a;
    *Max=*b;
}else{
    *Min=*b;
    *Max=*a;
}
}