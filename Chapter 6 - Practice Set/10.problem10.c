#include <stdio.h>
int main(){
    char character;
    char *ptr = &character;
    printf("welcome to showcasing character pointer \n Please enter your character");

    scanf("%c",&character);
    printf("the value of x is : %c\n",*ptr);
    printf("welcome to my channel ");
    return 0;

}