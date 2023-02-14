#include<iostream>

using namespace std ;

class Student
{
    public :
    char name ;
    int age ;
    int rollno ;

    void introduceYourself()
    {
        cout << name << " is " << age << " years old." << endl ;
    }
} ;

int main()
{
    Student s1 ;
    s1.name = 'A' ;
    s1.age = 10 ;
    s1.rollno = 20 ;

    s1.introduceYourself() ;

    Student s2 ;
    s2.name = 'B' ;
    s2.age = 100 ;
    s2.rollno = 200 ;

    s2.introduceYourself() ;

    return 0 ;
}
