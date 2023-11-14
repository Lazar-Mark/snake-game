#include "header.h"
Food** food;
void initFood(){
    food = calloc(1024,sizeof(Food*));


}
Food* createFood(){

    Food* new = calloc(1,sizeof(Food));
    new->c='o';
    new->pos.x=rand()%49+1;
    new->pos.y=rand()%49+1;
    for(int i=0;i<1024;i++){
        if(food[i] == NULL){

            food[i]=new;
            break;
        }


    }
    return new;
}
