#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int size, *array;
    printf("enter array size");
    scanf("%i", &size);

    array = calloc(size, sizeof(int));

    if (array == NULL)
    {
        printf("\nMemory could not be allocated - terminating");
        return -1; // Use minus one as we did not exit sucesfully
    }
    for (size_t i = 0; i < size; i++)
    {
        array[i] = i * i;
        printf("%i %i\n", i, array[i]);
    }
    
    return 0;
}
