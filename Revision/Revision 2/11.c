#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char filename[50];
    FILE *fp;
    printf("enter filename:");
    scanf("%s", &filename);
    printf("opening\n");

    fp = fopen(filename, "w");

    if (filename == NULL)
        return -1;

    printf("opened\n");

    for (size_t i = 0; i <= 90; i++)
    {
        printf("writing\n");
        fprintf(fp, "%f %i\n", ((float)i / 360) * 2 * 3.14159265, i);
    }
    printf("written");
    fclose(fp);

    return 0;
}
