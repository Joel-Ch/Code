#include <stdio.h>

int main(int argc, char const *argv[])
{
    int w, h;
    printf("enter width and height");
    scanf("%i %i", &w, &h);

    for (size_t i = 0; i < h; i++)
    {
        for (size_t i = 0; i <= w; i++)
        {
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}
