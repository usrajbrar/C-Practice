#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value of i is %d\n", i);
    i += 5;   // i = i + 5;
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", i++);
    printf("The value of i is %d\n", i);

    // i++ prints first and then increment(post increment operator)
    // ++i increments first and then print(pre increment operator)
}