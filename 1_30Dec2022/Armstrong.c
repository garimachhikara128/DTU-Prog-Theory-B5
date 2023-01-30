#include<stdio.h>

int main()
{
    int n ;
    printf("Enter Number : ") ;
    scanf("%d", &n) ;
    int temp = n ;

    int ans = 0 ;

    while(n != 0)
    {
        int rem = n % 10 ;
        ans = ans + (rem * rem * rem) ;
        n = n / 10 ;
    }

    if(temp == ans)
        printf("Armstrong\n") ;
    else 
        printf("Not Armstrong\n") ;


    return 0 ;

}