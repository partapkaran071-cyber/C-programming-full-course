#include <stdio.h>
int main(){
    int num = 10;
    int *ptr = &num;
    printf("the value of num is %d\n",num);
    printf("the value of num is %d",*ptr);
    return 0;
}