#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr = fopen("Record.txt", "w") ;

    if(fptr == NULL)
    {
        printf("ERROR !!!") ;
        exit(1) ;
    }

    int num ;
    printf("Enter a number ?\n") ;
    scanf("%d", &num) ;

    fprintf(fptr, "%d", num) ;
    fclose(fptr) ;

    return 0 ;
}