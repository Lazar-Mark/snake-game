#include "header.h"
//map border

void borderDraw(void){
    int n=50;

    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n; j++)
        {

            //corners
            if(i==0 && j==0)
               printf("%c",201);
            //top right corner
            else if(i==0 && j==n-1)
                printf("%c",187);


            else if(i==n-1 && j==0)
                printf("%c",200);

            else if(i==n-1 && j==n-1)
                printf("%c",188);

            //top bottom
            else if(i==0 || i==n-1)
                printf("%c",205);
            //left and right
            else if(j==0 ||j==n-1)
                printf("%c",186);


            //space
           else printf(" ");


        }
        printf("\n");
    }


}

void snakeDraw(Snake* snake){
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X=snake->pos.x;
    pos.Y=snake->pos.y;
    SetConsoleCursorPosition(console,pos);
    printf("%c",snake->c);

}
//cleaning
void clean(){

    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;


    CONSOLE_CURSOR_INFO cursor_info;
    GetConsoleCursorInfo(console, &cursor_info);
    cursor_info.dwSize = 1;
    cursor_info.bVisible= FALSE;
    SetConsoleCursorInfo(console, &cursor_info);

    pos.X=snake->prev.x;
    pos.Y=snake->prev.y;
    SetConsoleCursorPosition(console,pos);
    putchar(' ');


}
void foodDraw(){
    COORD pos;
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

        if(food!= NULL){
        pos.X=food->pos.x;
        pos.Y=food->pos.y;
        SetConsoleCursorPosition(console,pos);

        putchar(food->c);
        }


}
