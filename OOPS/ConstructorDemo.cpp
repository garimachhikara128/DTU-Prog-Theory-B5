#include<iostream>

using namespace std ;

class Student
{
    public :
    char name ;
    int age ;
    int rollno ;

    Student()
    {
        name = 'A' ;
        age = 10 ;
        rollno = 20 ;
        cout << "In Constructor" << endl ;
    }

    Student(char n, int a, int r)
    {
        name = n ;
        age = a ;
        rollno = r ;
        cout << "In Parametrized Constructor" << endl ;
    }

    ~Student()
    {
        cout << "Destructor called for " << name << endl ;
    }

    void introduceYourself()
    {
        cout << name << " is " << age << " years old." << endl ;
    }
} ;

int main()
{
    {
        Student s1 ;
        s1.introduceYourself() ;
    }

    {
        Student s2('Z', 15, 25) ;
        s2.introduceYourself() ;
    }

    return 0 ;
}