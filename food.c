#include "header.h"
Food* food;

Food* createFood(void){

    Food* new = calloc(1,sizeof(Food));

    new->c='o';
    new->pos.x=rand()%48+1;
    new->pos.y=rand()%48+1;
    food=new;
    return new;
}

