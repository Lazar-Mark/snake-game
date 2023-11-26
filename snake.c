#include "header.h"
    Snake* snake;
void initSnake(void){

        snake = calloc(1,sizeof(Snake));
        snake->c='#';
        snake->pos[0].x=10;
        snake->pos[0].y=10;
        snake->prev.x=9;
        snake->prev.y=9;
        snake->size=1;
}
int onFood(void){
    if(food==NULL)
        return 0;
    if(snake->pos[0].x ==food->pos.x && snake->pos[0].y==food->pos.y)
        return 1;

    return 0;

}
