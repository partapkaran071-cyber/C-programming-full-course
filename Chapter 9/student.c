#include <stdio.h>
struct student{
    int rollno;
    char name[10];
    float marks;
};
int main(){
    struct student student1;
    printf("Please Enter your details \n");
    printf("Enter Student1 rollno.");
    scanf("%d",&student1.rollno);
     printf("\nEnter Student1 name :");
    scanf("%s",student1.name);
     printf("\nEnter Student1 marks :");
    scanf("%f",&student1.marks);

    printf("This is your student detail roll no %d ,student name  %s , student mark%f",student1.rollno,student1.name,student1.marks);
        return 0;
    }
