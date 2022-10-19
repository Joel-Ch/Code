#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    int  a, b;

    // Note: Order of a,b indicates the order in which operations are carried out on execution

    // Increment operators
    b = 3;
    a = ++b;    // b is now 4, a is also 4
    printf("a=%f, b=%f",a,b);
    a = b++;    // a is 4, b is now 5,
    printf("\na=%f, b=%f",a,b);

    // Decrement operators (reset a back to 3)
    b = 3;
    printf("\na=%f, b=%f",a,b);
    a = b--;    // a is 3, b is now 2
    printf("\na=%f, b=%f",a,b);
    a = --b;    // b is now 1, a is also 1
    printf("\na=%f, b=%f",a,b);

    return 0;	// Exit from main
}
