#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    char c;
    int sum = 0;
    while(1)
    {
        c = getch();
        sum += 1;
        if(c == '!')
        {
            printf("%d", sum);
            return 0;
        }
    }
}
