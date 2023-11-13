 #include "header.h"
    Snake* snake;

    void setup(void){

        borderDraw();
        snake = calloc(1,sizeof(Snake));
        snake->c='#';
        snake->x=10;
        snake->y=10;


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
                    snake->y--;

                    break;
                case 'a':
                    snake->x--;
                    break;
                case 's':
                    snake->y++;
                    break;
                case 'd':
                    snake->x++;
                    break;

                default:
                    break;
                }



            snakeDraw(snake);
            Sleep(100);

        }
    }
