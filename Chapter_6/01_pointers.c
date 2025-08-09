#include <stdio.h>

int main()
{
    int i = 72;
    int k = 71;
    int* j = &i; // Integer Pointer j pointing to address of i
    printf("The address of i is %p\n", &i);
    printf("The address of pointer j pointing to i is %p\n", j);
    printf("The address of k is %p\n", &k);

    printf("The value at address j is %d\n", *j);
    printf("The value at address i is %d\n", *&i);
    return 0;
}
/* int i = 72;
   example address of i is 87994
   Then , &i is 87994
   and *87994 is 72
   
   Now, lets take a pointer pointing to the address of i
   int* j = &i;
   It stores the address of i which is 87994
   Along with it, it has its own address
   example address of j is 87998
   Then, &j is 87998
   and *87998 is 87994
   and *87994 is 72 which is storing address of i .*/

   /* Address of Operator or Ampersand  --> &
      Value at Address Operator or star --> * . */

    