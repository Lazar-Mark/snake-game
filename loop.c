 #include "header.h"


    void setup(void){
        srand(time(NULL));
        borderDraw();
        initSnake();
        HANDLE console=GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_CURSOR_INFO cursor_info;
        GetConsoleCursorInfo(console, &cursor_info);
        cursor_info.dwSize = 1;
        cursor_info.bVisible= FALSE;
        SetConsoleCursorInfo(console, &cursor_info);
        createFood();

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
                    snake->prev.y=snake->pos[snake->size].y;
                    snake->prev.x=snake->pos[snake->size].x;
                    snake->pos[0].y--;

                    break;
                case 'a':
                    snake->prev.x=snake->pos[snake->size].x;
                    snake->prev.y=snake->pos[snake->size].y;
                    snake->pos[0].x--;
                    break;
                case 's':
                    snake->prev.y=snake->pos[snake->size].y;
                    snake->prev.x=snake->pos[snake->size].x;
                    snake->pos[0].y++;
                    break;
                case 'd':
                    snake->prev.x=snake->pos[snake->size].x;
                    snake->prev.y=snake->pos[snake->size].y;
                    snake->pos[0].x++;
                    break;

                default:
                    break;
                }

             for(int i=snake->size;i>0;i--){
                    snake->pos[i].x=snake->pos[i-1].x;
                    snake->pos[i].y=snake->pos[i-1].y;
             }

            if(onFood()){

                free(food);
                food=NULL;
                snake->size++;
                createFood();
                snake->pos[snake->size].x=snake->prev.x--;
                snake->pos[snake->size].y=snake->prev.y--;
            }

            clean();
            foodDraw();
            snakeDraw(snake);

            Sleep(40);
             if(snake->pos[0].x==49 || snake->pos[0].y==49 || snake->pos[0].x==0 || snake->pos[0].y==0)
             break;

        }
    }
