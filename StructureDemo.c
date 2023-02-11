#include<stdio.h>

int main()
{
    struct Student
    {
        char name ;
        int age ;
        int rollno ;
    } ;

    struct Student s1 = {'A', 10, 100}, s2 ;
    struct Student *ptr = &s1 ;

    printf("%c\n", ptr->name) ;
    printf("%d\n", ptr->age) ;

    // printf("%lu\n", sizeof(struct Student)) ;

    // s1.name = 'A' ;
    // s1.age = 20 ;
    // s1.rollno = 10 ;

    // printf("%c\n", s1.name) ;
    // printf("%d\n", s1.age) ;
    // printf("%d\n", s1.rollno) ;

    // s2.name = 'B' ;
    // s2.age = 30 ;
    // s2.rollno = 20 ;

    // printf("%c\n", s2.name) ;
    // printf("%d\n", s2.age) ;
    // printf("%d\n", s2.rollno) ;

    return 0 ;
}
