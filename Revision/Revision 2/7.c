#include <stdio.h>
#include <stdlib.h>

int settingOfValues(int array[])
{
    for (size_t i = 0; i < 100; i++)
    {
        array[i] = i * i;
    }
}

int main(int argc, char const *argv[])
{
    int *array = calloc(100, sizeof(int));
    if (array==NULL)
        return -1;
    settingOfValues(array);



    for (size_t i = 0; i < 100; i++)
    {
        printf("%i\n", array[i]);
    }
    return 0;
}
