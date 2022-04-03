#include <stdio.h>

int main()
{
    int marks,student1;
    printf("enter st1 marks \n");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
    {
        printf("your grade is A+");
    }
    else if (marks >= 80 && marks <= 89)
    {
        printf("your grade is A");
    }
    else if (marks >= 70 && marks <= 79)
    {
        printf("your grade is A-");
    }
    else if (marks >= 60 && marks <= 69)
    {
        printf("your grade is B+");
    }
    else if (marks >= 50 && marks <= 59)
    {
        printf("your grade is B-");
    }
    else if (marks >= 40 && marks <= 49)
    {
        printf("your grade is C");
    }
    else if (marks >= 35 && marks <= 39)
    {
        printf("your grade is D");
    }
    else if (marks >= 0 && marks <= 34)
    {
        printf("your grade is F");
    }

    else
        (printf("wrong input"));
    // printf("")
    return 0;
}