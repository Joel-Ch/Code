#include <conio.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    int total = 0, odd = 0, even = 0;
    char input;
    while(1)
    {
        input = getch();
        printf("\nentered: %d", input);

        if (input == '!')
        {
            printf("\ntotal: %d odd: %d even: %d", total, odd, even);
        }
        else if(isdigit(input))
        {
            if((int)(input)%2 == 0)
                even += 1;
            else
                odd += 1;
            total += 1;
        }
        else
        {
            printf("\nplease type ! or a number");
        }
    }
    return 0;
}
