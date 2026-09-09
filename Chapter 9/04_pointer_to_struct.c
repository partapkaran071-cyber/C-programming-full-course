#include <stdio.h>

struct student
{
    int rollno; 
    char name[10];
    float marks;
}; // semicolon is important

int main(){
    int a = 5;
    int *ptr = &a;
    struct student student = {1,"ram",99};
    struct student *stu_ptr=&student;

    printf("Roll no : %d Name : %s  Marks : %.2f",student.rollno,student.name,student.marks);
    printf("\nRoll no : %d Name : %s  Marks : %.2f",stu_ptr->rollno,stu_ptr->name,stu_ptr->marks);

return 0;
}

