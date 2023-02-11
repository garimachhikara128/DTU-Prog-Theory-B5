#include<stdio.h>

int main()
{
    FILE *fptr = fopen("Record.txt", "r") ;
    int count = 0 ;

    while(1)
    {
        char ch = fgetc(fptr) ;

        if(ch == EOF)
            break ;

        if(ch == ' ')
            continue ;
        
        count++ ;
    }

    printf("%d\n", count) ;

    return 0 ;
}