#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int x, y=1;//y is the horizontal number of hashes

    fp = fopen("q5_output.txt", "w");//open file
    if (fp == NULL)//check file was opened
    {
        printf("couldn't open file, exiting");
        return -1;
    }
    printf("enter a height for the triangle");//get user input
    scanf("%i", &x);
    if (x>15)//set max to 15
    {
        x = 15;
    }
    for (int i = 0; i < x; i++)//loop the correct number of lines
    {
        for (int i = 0; i < y; i++)
        {
            printf("#");
            fprintf(fp,"#");
        }
        printf("\n");//finish line
        fprintf(fp,"\n");
        y += 1;//print one more hash than last line
    }

    fclose(fp);//close file after use
    return 0;
}
