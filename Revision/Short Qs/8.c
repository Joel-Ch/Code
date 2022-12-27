#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int top = 0;
    for (size_t i = 0; i <= 5; i++)
    {
        top += (i * i);
    }
    printf("%.3f", sqrt(top / 5));

    return 0;
}
