#include <stdio.h>
int main(){

    char studentsname[5][20]={"rohan","sahil","sonu","kunal"};
   float marks[]={89.4,67.4,89.4,99.5,66};
    int rollno[]={12,14,32,36,14};

    for(int i=0;i<5;i++){

    printf("Student name : %s \nRoll no. : %d\nMarks : %.2f\n",studentsname[i],rollno[i],marks[i]);
    }
    return 0;
}
