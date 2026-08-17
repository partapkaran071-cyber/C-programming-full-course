#include <stdio.h>

int main(){
//    char name[50];
//    printf("enter you name ");
//    gets(name);// not safe cause to use 
//    printf("Good morning ");
//    puts(name);
char name [50];
printf("Please enter your name ");
fgets(name,sizeof(name),stdin);

printf("Good morning ");
puts(name);

return 0;
}

