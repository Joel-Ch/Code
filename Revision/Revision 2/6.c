#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int size;
    printf("enter array size");
    scanf("%i", &size);

    float *array = calloc(size, sizeof(float));

    if (array == NULL)
    {
        printf("\nMemory could not be allocated - terminating");
        return -1; // Use minus one as we did not exit successfully
    }
    
    for (int i = 0; i < size; i++)
    {
        *(array+i) = ((float)i / 360) * 2 * 3.14159265;
        printf("%3i %.2f\n", i, array[i]);
    }

    free(array);
    return 0;
}
