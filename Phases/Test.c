#include<stdio.h>
#include"Test2.c"

#define PI 3.14
#define Area(r) PI*r*r
#define AND &&

int main()
{
    // printing the content
    printf("hello\n") ;
    fun() ;

    // Macro Demo
    int ans = Area(7) ;
    printf("%d\n", ans) ;

    printf("%d\n", 0 AND 100) ;

    return 0 ;
}