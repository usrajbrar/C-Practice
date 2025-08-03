#include <stdio.h>

int main()
{
    int a = 4;
    printf("%d %d %d\n", a, ++a, a++);
    // 4 5 5 If the Evaluation order is from left to Right.
    // 6 6 4 If the Evaluation order is from Right to Left. Most Common
}