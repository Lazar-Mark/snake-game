#include "header.h"
    Snake* snake;
void initSnake(){

        snake = calloc(1,sizeof(Snake));
        snake->c='#';
        snake->pos.x=10;
        snake->pos.y=10;
        snake->prev.x=9;
        snake->prev.y=9;

}
int onFood(){
    if(food==NULL)
        return 0;
    if(snake->pos.x ==food->pos.x && snake->pos.y==food->pos.y)
        return 1;

    return 0;

}
