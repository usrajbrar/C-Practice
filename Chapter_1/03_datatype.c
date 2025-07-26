#include <stdio.h>

int main() {
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of char: %lu byte\n", sizeof(char));
    printf("Size of float: %lu bytes\n", sizeof(float));

    char k = 'U';
    int l= 7;
    float m = 3.4;

    printf ("Value of k: %c\n", k);
    printf("Value of l : %d\n", l);
    printf("Value of m : %f\n", m);
    return 0;
}
