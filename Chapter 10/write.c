#include <stdio.h>

int main(){
    FILE *filepointer;//file declaration 
    char text[1000];


    filepointer= fopen("write.txt","w");//read a file 
    if(filepointer == NULL){
        printf("\nFile open Failed .......");
        return 1;
    }

    fprintf(filepointer,"Hello I am Karan and this is my first writing operation in C Programming\n");
     fprintf(filepointer,"The square of %d is %d",3,9);
 
 


    int result = fclose(filepointer);//closing a file 
    if(result == 0){
        filepointer = NULL;
    }else{
        printf("\nFile was not closed ");
        return 1;
    }
    filepointer = NULL;
    return 0;

}