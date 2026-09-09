#include <stdio.h>
struct student 
{
    int rollno;
    char name[10];
    float marks;
};
int main(){
    //initialization 
    //*direct initialization 
    struct student s1={10,"ram",88.4};
    //*desiganeted initialization 
    struct student s2={.rollno=99,.name="shyam",.marks=99.87};
    //*zero initialization
    struct student s3 = {0};
    //*copy initialization
    struct student s4 = s1;
    s4.rollno = 9;
    
    printf("Roll no. = %d, Name = %s , Marks = %.2f",s1.rollno,s1.name,s1.marks);
    printf("\nRoll no. = %d, Name = %s , Marks = %.2f",s2.rollno,s2.name,s2.marks);
    printf("\nRoll no. = %d, Name = %s , Marks = %.2f",s3.rollno,s3.name,s3.marks);
    printf("\nRoll no. = %d, Name = %s , Marks = %.2f",s4.rollno,s4.name,s4.marks);
    
    
    return 0;
}
