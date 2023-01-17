#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int x, y=1;

    fp = fopen("q5_output.txt", "w");
    if (fp == NULL)
    {
        printf("couldn't open file, exiting");
        return -1;
    }
    printf("enter a height for the triangle");
    scanf("%i", &x);
    if (x>15)
    {
        x = 15;
    }
    for (size_t i = 0; i < x; i++)
    {
        for (size_t i = 0; i < y; i++)
        {
            printf("#");
            fprintf(fp,"#");
        }
        printf("\n");
        fprintf(fp,"\n");
        y += 1;
    }
    
    fclose(fp);
    return 0;
}