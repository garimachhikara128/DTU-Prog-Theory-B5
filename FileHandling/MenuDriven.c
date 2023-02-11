#include<stdio.h>
#include<stdlib.h>

struct Student
{
    char name[20] ;
    int age ;
    int rollno ;
} s ;

void insert()
{
    FILE *fptr = fopen("Record.txt", "a") ;

    printf("Enter name, age and rollno ?\n") ;
    scanf("%s%d%d", s.name, &s.age, &s.rollno) ;

    fwrite(&s, sizeof(s), 1, fptr) ;
    fclose(fptr) ;
}

void display()
{
    FILE *fptr = fopen("Record.txt", "r") ;

    while(fread(&s, sizeof(s), 1, fptr))
    {
        printf("%s %d %d\n", s.name, s.age, s.rollno) ;
    }

    fclose(fptr) ;
}

void search()
{
    int rn ;
    printf("Roll No. to be searched ?\n") ;
    scanf("%d", &rn) ;

    FILE *fptr = fopen("Record.txt", "r") ;

    while(fread(&s, sizeof(s), 1, fptr))
    {
        if(s.rollno == rn)
            printf("%s %d %d\n", s.name, s.age, s.rollno) ;
    }

    fclose(fptr) ;
}

void update()
{
    int rn ;
    printf("Roll No. to be updated ?\n") ;
    scanf("%d", &rn) ;

    // Step 1 : original -> temp
    FILE *fo = fopen("Record.txt", "r") ;
    FILE *ft = fopen("Temp.txt", "w") ;

    while(fread(&s, sizeof(s), 1, fo))
    {
        if(s.rollno == rn)
        {
            printf("Enter the updated details ?") ;
            scanf("%s%d%d", s.name, &s.age, &s.rollno) ;
            fwrite(&s, sizeof(s), 1, ft) ;
        }
        else
        {
            fwrite(&s, sizeof(s), 1, ft) ;
        }
    }

    fclose(fo) ;
    fclose(ft) ;

    // Step 2 : temp -> original
    fo = fopen("Record.txt", "w") ;
    ft = fopen("Temp.txt", "r") ;

    while(fread(&s, sizeof(s), 1, ft))
    {
        fwrite(&s, sizeof(s), 1, fo) ;
    }

    fclose(fo) ;
    fclose(ft) ;

}

void delete()
{
    int rn ;
    printf("Roll No. to be deleted ?\n") ;
    scanf("%d", &rn) ;

    // Step 1 : original -> temp
    FILE *fo = fopen("Record.txt", "r") ;
    FILE *ft = fopen("Temp.txt", "w") ;

    while(fread(&s, sizeof(s), 1, fo))
    {
        if(s.rollno == rn)
        {
            
        }
        else
        {
            fwrite(&s, sizeof(s), 1, ft) ;
        }
    }

    fclose(fo) ;
    fclose(ft) ;

    // Step 2 : temp -> original
    fo = fopen("Record.txt", "w") ;
    ft = fopen("Temp.txt", "r") ;

    while(fread(&s, sizeof(s), 1, ft))
    {
        fwrite(&s, sizeof(s), 1, fo) ;
    }

    fclose(fo) ;
    fclose(ft) ;

}

int main()
{
    while(1)
    {
        printf("SELECT YOUR CHOICE :-\n") ; 
        printf("1. INSERT\n") ; 
        printf("2. DISPLAY\n") ; 
        printf("3. SEARCH\n") ; 
        printf("4. UPDATE\n") ; 
        printf("5. DELETE\n") ; 
        printf("6. EXIT\n") ; 

        int choice ;
        scanf("%d", &choice) ;

        switch(choice)
        {
            case 1 : insert() ; break ;
            case 2 : display() ; break ;
            case 3 : search() ; break ;
            case 4 : update() ; break ;
            case 5 : delete() ; break ;
            case 6 : exit(1) ; break ;
            default : printf("Wrong Choice !!") ; break ;
        }
    }

    return 0 ;
}