#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (size_t i = 0; i <= 999; i++)
    {
        printf("%3i %c\n", i, i);
    }
    
    return 0;
}
