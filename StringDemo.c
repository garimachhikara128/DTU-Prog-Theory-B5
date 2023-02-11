#include<stdio.h>
#include<string.h>

int main()
{
    char s1[20] = "dtu" ;
    char s2[20] = "code" ;

    char str[] = "hello" ;
    // Length of string
    printf("%lu\n", strlen(str)) ;

    // strrev(str) ; // string reverse
    // strupr(str) ; // string upper case
    // strlwr(str) ; // string lower case

    // STRCMP
    // equal : 0
    // s1 > s2 : +ve
    // s1 < s2 : -ve
    printf("%d\n", strcmp(s1, s2)) ;

    // Content of s2 will be concatenated to s1
    strcat(s1, s2) ; 
    printf("%s %s\n", s1, s1) ; 

    // Content of s3 will be copied to s4
    char s3[20] = "dtu" ;
    char s4[20] = "hi";
    strcpy(s4, s3) ;    
    printf("%s", s4) ;

    return 0 ;
}