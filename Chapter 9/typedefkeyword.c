#include <stdio.h>
typedef struct {
    int rollno;
    char name[10];
    float marks;
}student;
int main(){
    typedef int karan;
    karan i = 5;
    student students[2]={

      {1,"ram",99.5},
      {2,"shyam",89.7}
    };

    for(int i = 0; i < 2; i++){
        printf("Roll no : %d , Name : %s , Marks : %.2f\n",students[i].rollno,students[i].name,students[i].marks);
    }
}