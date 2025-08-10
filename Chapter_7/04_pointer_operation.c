#include <stdio.h>

int main(){
    int a = 21;
    int* ptr = &a;

    printf("The Address of a is %u\n", &a);
    printf("The Address of a is %u\n", ptr);
    ptr++;
    printf("The Value of ptr is %u\n", ptr);
    printf("\n");

    char c = 'U';
    char* ptr2 = &c;

    printf("The Address of c is %u\n", &c);
    printf("The Address of c is %u\n", ptr2);
    ptr2++;
    printf("The Value of ptr2 is %u\n", ptr2);
    return 0;
}