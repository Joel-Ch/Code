#include <stdio.h>

void fillArray(float array[])
{
    for (size_t i = 0; i <= 360; i++)
    {
        array[i] = ((float)i / 360) * 2 * 3.14159265;
    }
    return;
}
void displayArray(float array[])
{
    for (size_t i = 0; i < 360; i++)
    {
        printf("%f %i\n", array[i], i);
    }
    return;
}


int main(int argc, char const *argv[])
{
    float array[360];
    fillArray(array);
    displayArray(array);
    
    
    

    return 0;
}
