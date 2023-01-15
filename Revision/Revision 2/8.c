#include <stdio.h>
#include <stdlib.h>

void fillArray(float *array)
{
    printf("this text is vital for code running (don't ask why)\n");
    for (size_t i = 0; i <= 360; i++)
    {
        *(array+i) = ((float)i / 360) * 2 * 3.14159265;
    }
    return;
}
void displayArray(float *array)
{
    for (size_t i = 0; i < 360; i++)
    {
        printf("%f %i\n", *(array + i), i);
    }
    return;
}

int main(int argc, char const *argv[])
{
    float *array = calloc(360, sizeof(float));
    if (array == NULL)
        return -1;

    fillArray(array);
    displayArray(array);

    return 0;
}