#include <stdio.h>

int main()
{
    int s1;
    printf("Enter the marks of subject 1: ");
    scanf("%d", &s1);
    int s2;
    printf("Enter the marks of subject 2: ");
    scanf("%d", &s2);
    int s3;
    printf("Enter the marks of subject 3: ");
    scanf("%d", &s3);

    int s = (s1 + s2 + s3) / 3;
    if (s >= 40)
    {
        if (s1 > 33 && s2 > 33 && s3 > 33)
        {
            printf("Student has passed\n");
            printf("Student has scored %d %% overall\n", s);
            printf("Student has scored %d in subject 1\n", s1);
            printf("Student has scored %d in subject 2\n", s2);
            printf("Student has scored %d in subject 3\n", s3);
        }
        else
        {
            printf("Student has failed\n");
            printf("Student has scored %d %% overall\n", s);
            printf("Student has scored %d in subject 1\n", s1);
            printf("Student has scored %d in subject 2\n", s2);
            printf("Student has scored %d in subject 3\n", s3);
        }
    }
    else
    {
        printf("Student has failed\n");
        printf("Student has scored %d %% overall\n", s);
        printf("Student has scored %d in subject 1\n", s1);
        printf("Student has scored %d in subject 2\n", s2);
        printf("Student has scored %d in subject 3\n", s3);
    }
    
    return 0;
}