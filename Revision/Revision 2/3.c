#include <stdio.h>

int settingOfValues(int array[])
{
    for (size_t i = 0; i < 100; i++)
    {
        array[i] = i * i;
    }
}


int main(int argc, char const *argv[])
{
    int array[100];
    settingOfValues(array);

    for (size_t i = 0; i < 100; i++)
    {
        printf("%i\n", array[i]);
    }
    return 0;
}

