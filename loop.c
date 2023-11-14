 #include "header.h"


    void setup(void){
        srand(time(NULL));
        borderDraw();
        initFood();
        initSnake();
        CONSOLE_CURSOR_INFO cursor_info;
        HANDLE console=GetStdHandle(STD_OUTPUT_HANDLE);
        GetConsoleCursorInfo(console, &cursor_info);
        cursor_info.dwSize = 1;
        cursor_info.bVisible= FALSE;
        SetConsoleCursorInfo(console, &cursor_info);


    }

    void loop(void){
        INPUT_RECORD slovo;
        HANDLE console = GetStdHandle(STD_INPUT_HANDLE);






        int broj;
        char c='d';
        while(1){

                PeekConsoleInput(console,&slovo,1,(LPDWORD)&broj);

                c= slovo.Event.KeyEvent.uChar.AsciiChar;
                FlushConsoleInputBuffer(console);



             switch(c){

                case 'w':
                    snake->prev.y=snake->pos.y;
                    snake->prev.x=snake->pos.x;
                    snake->pos.y--;

                    break;
                case 'a':
                    snake->prev.x=snake->pos.x;
                    snake->prev.y=snake->pos.y;
                    snake->pos.x--;
                    break;
                case 's':
                    snake->prev.y=snake->pos.y;
                    snake->prev.x=snake->pos.x;
                    snake->pos.y++;
                    break;
                case 'd':
                    snake->prev.x=snake->pos.x;
                    snake->prev.y=snake->pos.y;
                    snake->pos.x++;
                    break;

                default:
                    break;
                }


            clean();
            snakeDraw(snake);
            Sleep(30);
             if(snake->pos.x==50 || snake->pos.y==50 || snake->pos.x==0 || snake->pos.y==0)
             break;
        }
    }
