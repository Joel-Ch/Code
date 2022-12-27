#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int sum = 0;

    for (int i = 1; i <= 15; i += 2)
    {
        sum += i;
        printf("%d\n", i);
    }

    printf(" %d", sum);

    return 0;
}
