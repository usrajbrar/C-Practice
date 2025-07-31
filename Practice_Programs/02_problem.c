#include <stdio.h>

int main()
{
    printf("Enter the marks of subject 1\n");
    int s1;
    scanf("%d", &s1);
    printf("Enter the marks of subject 2\n");
    int s2;
    scanf("%d", &s2);
    printf("Enter the marks of subject 3\n");
    int s3;
    scanf("%d", &s3);

    int t = (s1 + s2 + s3) / 3;

    if (s1 >= 33 && s2 >= 33 && s3 >= 33)
    {
        if (t >= 40)
        {
            printf("Total Perecentage acquired: %d %%\n", t);
            printf("Marks in subject_1: %d\n", s1);
            printf("Marks in subject_2: %d\n", s2);
            printf("Marks in subject_3: %d\n", s3);
            printf("Student has passed\n");
        }
        else
        {
            printf("Total Perecentage acquired: %d %%\n", t);
            printf("Marks in subject_1: %d\n", s1);
            printf("Marks in subject_2: %d\n", s2);
            printf("Marks in subject_3: %d\n", s3);
            printf("Student has failed due to less total percentage\n");
        }
    }
    else
    {
        printf("Total Perecentage acquired: %d %%\n", t);
        printf("Marks in subject_1: %d\n", s1);
        printf("Marks in subject_2: %d\n", s2);
        printf("Marks in subject_3: %d\n", s3);
        printf("Student has failed due to less individual marks\n");
    }
}