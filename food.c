#include "header.h"
Food* food;

Food* createFood(){

    Food* new = calloc(1,sizeof(Food));

    new->c='o';
    new->pos.x=rand()%49+1;
    new->pos.y=rand()%49+1;
    food=new;
    return new;
}

