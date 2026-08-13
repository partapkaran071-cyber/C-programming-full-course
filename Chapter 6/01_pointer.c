#include <stdio.h>

int main(){

    int a = 12;
    int* j = &a;
    printf("the address of a is %p \n",&a);
    printf("the address of j is %p \n",&j);
    return 0;
}