#include<stdio.h>
#include<string.h>


struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main () {
    struct student s1;
    s1.roll = 422;
    s1.cgpa = 3.53;
    strcpy(s1.name, "JAHANZAB JHANDEER");

    printf("Student name is : %s\n" , s1.name);
    printf("Stucent Roll is :%d\n" , s1.roll);
    printf("student CGPA is :%f\n" , s1.cgpa);

    printf("\n\n");

    struct student s2;
    s2.roll = 423;
    s2.cgpa = 2.75;
    strcpy(s2.name, "UMER FAROOQ");

    printf("\n");
    printf("Stundet Name is :%s\n" , s2.name);
    printf("Student Roll Numbe is :%d\n" , s2.roll);
    printf("Student CGPA is :%f\n" , s2.cgpa);

    printf("\n");

    struct student s3;
    strcpy(s3.name, "SHOAIB AKRAM");
    s3.roll = 424;
    s3. cgpa = 3.4;

    printf("Student Name is : %s\n" , s3.name);
    printf("Student Roll Num is :%d\n" , s3.roll);
    printf("Student CGPA is :%f\n" , s3.cgpa);

    printf("\n");
}