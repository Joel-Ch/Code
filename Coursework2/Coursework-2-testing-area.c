#include <stdlib.h>
#include <stdio.h>
#include "UserInput.h"

int main(int argc, char const *argv[])
{   
    while (1)
    {
        printf("%f", inputValue("please enter a number", 1000, 1000000));
        /* code */
    }
    
    return 0;
}
