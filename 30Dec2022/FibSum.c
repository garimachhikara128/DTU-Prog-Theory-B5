#include<stdio.h>

int main()
{
    int n ; 
    scanf("%d", &n) ;

    int s = 0;

    int a = 0 ;
    int b = 1 ;

    for(int i = 1 ; i <= n ; i++)
    {
        s = s + a ;
        int c = a + b ;
        a = b ;
        b = c ;
    }
    printf("%d", s) ;

    return 0 ;
}