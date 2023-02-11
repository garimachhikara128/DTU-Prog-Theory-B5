#include<stdio.h>
#define PI 3.14
#define AREA(x) PI * x * x
#define SUM(a,b) (a + b) 

int main()
{
    // float res = AREA(2) ;
    // printf("%f", res) ;

    int res = SUM(2,3) * SUM(3,4) ;
    printf("%d", res) ;

    fun(3,4,8) ;
    return 0 ;
}

void fun(int a, int b, int c)
{
    int sum = a + b ;
}