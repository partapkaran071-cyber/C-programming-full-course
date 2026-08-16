#include <stdio.h>
void swap(int*,int*);
void swap(int*ptr1,int*ptr2){
    int temp = *ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;


}

int main(){
    int x =10;
    int y =20;
    printf("the value of x is=%d ,the value of y is =%d\n",x,y);
    swap(&x,&y);
    printf("the value of x is=%d ,the value of y is =%d\n",x,y);

    return 0;
}