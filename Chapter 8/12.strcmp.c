#include <stdio.h>
#include <string.h>

int main(){

    int result = strcmp("apple","banana");
    printf("your comparison result of apple and banana is %d \n", result);

     result = strcmp("cherry","banana");
    printf("your comparison result of cherry and banana is %d \n", result);

     result = strcmp("date","date");
    printf("your comparison result of date and date is %d \n", result);



    return 0;
}