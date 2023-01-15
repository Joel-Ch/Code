#include <stdio.h>

int main(int argc, char const *argv[])
{
    float array[360];
    for (size_t i = 0; i <= 360; i++)
    {
        array[i] = ((float)i / 360) * 2 * 3.14159265;
        printf("%f %i\n", array[i], i);
    }
    
    return 0;
}
