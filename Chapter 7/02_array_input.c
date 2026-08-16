#include <stdio.h>

int main(){
    //int marks1,marks2,marks3,marks4,marks5;
    int marks[5];
    printf("Total marks scored in english\n");
    scanf("%d",&marks[0]);
     printf("Total marks scored in hindi\n");
    scanf("%d",&marks[1]); 
    printf("Total marks scored in maths\n");
    scanf("%d",&marks[2]);
     printf("Total marks scored in science\n");
    scanf("%d",&marks[3]);
     printf("Total marks scored in socialscience\n");
    scanf("%d",&marks[4]);

    printf("Marks in english is :%d\n",marks[0]);
    printf("Marks in hindi is :%d\n",marks[1]);
    printf("Marks in math is :%d\n",marks[2]);
    printf("Marks in science is :%d\n",marks[3]);
    printf("Marks in social science is :%d\n",marks[4]);


 
    return 0;
}