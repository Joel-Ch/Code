#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

COORD coord = {0, 0};

void gotoxy(int x,int y)
{
    coord.X = x;
    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(int argc, char const *argv[])
{
    gotoxy(17, 5);
    printf("hi");
    gotoxy(17, 10);
    printf("bye");
    return 0;
}
