#include<stdio.h>
void fun() ;

int main()
{
   
    fun() ;
    fun() ;
    fun() ;

    return 0 ;
}

void fun()
{
    static int i  ;
    i = 1 ;
    printf("%d\n", i) ;
    i++ ;
}