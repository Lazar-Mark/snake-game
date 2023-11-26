#include "header.h"


int main(int argc, char const *argv[])
{
    setup();
    loop();

    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X=20;
    pos.Y=25;
    SetConsoleCursorPosition(console, pos);
    printf("Game over");
    pos.Y=26;
    SetConsoleCursorPosition(console, pos);
    printf("score: %d",snake->size-1);
    getchar();
}
