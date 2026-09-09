#include <stdio.h>
struct student
{
    int rollno;
    char names[10];
    float marks;
};

int main(){
    struct student students[5]={
        {12,"rohan",89.4},
        {14,"sahil",67.4},
        {32,"sonu",89.4},
        {36,"kunal",99.5},
        {14,"geeta",66}
    };


   for(int i = 0; i < 5; i++){

    printf("Student name : %s \nRoll no. : %d\nMarks : %.2f\n",students[i].names,students[i].rollno,students[i].marks);
    }
    return 0;
}
