#include<iostream>

using namespace std ;

int sum(int a, int b)
{
    cout << "In 2 args" << endl ;
    return a + b ;
}

int sum(int a, int b, int c)
{
    cout << "In 3 args" << endl ;
    return a + b + c;
}

double sum(double a, int b, int c)
{
    cout << "In 3 double args" << endl ;
    return a + b + c;   
}

int main()
{   
    cout << sum(2,3) << endl ;
    cout << sum(2,3,4) << endl ;
    cout << sum(2.5,3,4) << endl ;
    return 0 ;
}