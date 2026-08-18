#include <stdio.h>
#include <string.h>

int main(){
    char name[50];
    printf("Please enter your name ");
    fgets(name,50,stdin);
    int length = strlen(name);
    printf("Your total length of your name is %d\n",length);

    char new_name[50];
    strcpy(new_name,name);
    printf("%s is copied and changed to %s",name , new_name);

    return 0;

}