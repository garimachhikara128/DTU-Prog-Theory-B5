#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr = fopen("Record.txt", "r") ;

    if(fptr == NULL)
    {
        printf("ERROR !!!") ;
        exit(1) ;
    }

    int num ;

    fscanf(fptr, "%d", &num) ;

    printf("Number is %d\n", num) ;
    
    fclose(fptr) ;

    return 0 ;
}