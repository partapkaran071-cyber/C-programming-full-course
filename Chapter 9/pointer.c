#include <stdio.h>
struct student {
    int rollno;
    char name[10];
    float marks;
};

int main(){
    int a = 5;
    int *ptr = &a;
    struct student student ={1 , "karan" , 99.6 };
    struct student *stu_ptr = &student;
    printf("\nroll no : %d  Name : %s  marks : %f",student.rollno,student.name,student.marks);
    //another way to access  
    printf("\nroll no : %d  Name : %s marks : %f",stu_ptr->rollno,stu_ptr->name,stu_ptr->marks);
    return 0;
}