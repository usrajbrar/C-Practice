#include <stdio.h>

void good_morning(); // function prototype
void good_afternoon(); // function prototype
void good_night();  // function prototype

void good_morning() // user-defined function
{
    printf("Good Morning!\n"); 
}

void good_afternoon() // user-defined function
{
    printf("Good Afternoon!\n");
}

void good_night() // user-defined function
{
    printf("Good Night!\n");
}
int main() // built-in or library function
{
    good_morning();
    good_afternoon();
    good_night();
}