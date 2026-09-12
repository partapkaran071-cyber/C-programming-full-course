#include <stdio.h>

int main(){
    FILE *filepointer;//file declaration 
    char text[1000];


    filepointer= fopen("karan.txt","r");//read a file 
    if(filepointer == NULL){
        printf("\nFile open Failed .......");
        return 1;
    }
    /*used to only open a line 

    fgets(text,1000,filepointer);
    printf("%s",text);
*/
    char c;//used to open a file 
    do{
        c = fgetc(filepointer);
        printf("%c",c);
    }while(c!=EOF);


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