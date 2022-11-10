#include <stdlib.h>
#include <stdio.h>
#include <string.h>

float main()
{
    char value[5];
    int va;
    float val = 1;

    while (val != 0)
    {

        va = scanf("%s", &value);


        val = atof(value);

        printf("value = %f, input = %i", val, va);
    
    }
    

    

}
