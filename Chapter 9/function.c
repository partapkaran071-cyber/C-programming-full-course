#include <stdio.h>
struct Student {
    int rollno;
    char name[10];
    float marks;
};
void print_Student(struct Student stu);
void print_Student_from_pointer(struct Student *stu);

int main(){
    int a = 5;
    int *ptr = &a;
    struct Student student ={1 , "karan" , 99.6 };
    struct Student *stu_ptr = &student;
    print_Student(student);
   print_Student_from_pointer(stu_ptr);
}
void print_Student(struct Student stu){
    printf("\n Roll no : %d  Name : %s  Marks : %2.f",stu.rollno,stu.name,stu.marks);
}
void print_Student_from_pointer(struct Student *ptr){
     printf("\n Roll no : %d  Name : %s  Marks : %2.f",ptr->rollno,ptr->name,ptr->marks);
}