#include<stdio.h>
#include"File1.c"

int main()
{
    extern int a ;

    printf("%d\n", a) ;
    
    return 0 ;
}