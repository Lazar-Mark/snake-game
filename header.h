
#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>



typedef struct{

    int x;
    int y;


}Food;
typedef struct{

    int y;
    int x;
    char c;
    int size;


}Snake;
void setup(void);
void loop(void);
void borderDraw(void);
void snakeDraw(Snake* snake);
extern Snake* snake;
#endif
