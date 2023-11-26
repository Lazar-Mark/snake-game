
#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
typedef struct{

    int x;
    int y;

}Position;
typedef struct{

    Position pos;
    char c;

}Food;
typedef struct{

    Position pos[1000];
    Position prev;
    char c;
    int size;


}Snake;
extern  Food* food;
void initSnake(void);
void foodDraw(void);
int onFood(void);
Food* createFood(void);
void clean(void);
void setup(void);
void loop(void);
void borderDraw(void);
void snakeDraw(Snake* snake);
extern Snake* snake;
#endif
