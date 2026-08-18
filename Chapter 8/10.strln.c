#include <stdio.h>
#include <string.h>

int main(){
    char name[50];
    printf("Please enter your name ");
    fgets(name,50,stdin);
    int length = strlen(name);
    printf("Your total length of your name is %d",length);

    return 0;

}