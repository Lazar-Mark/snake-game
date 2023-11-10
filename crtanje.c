#include "header.h"
//map border
void borderDraw(void){
    int n=50;

    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n; j++)
        {

            //corners
            if(i==0 && j==0)
               printf("%c",201);
            //top right corner
            else if(i==0 && j==n-1)
                printf("%c",187);


            else if(i==n-1 && j==0)
                printf("%c",200);

            else if(i==n-1 && j==n-1)
                printf("%c",188);

            //top bottom
            else if(i==0 || i==n-1)
                printf("%c",205);
            //left and right
            else if(j==0 ||j==n-1)
                printf("%c",186);


            //space
           else printf(" ");


        }
        printf("\n");
    }


}
void snakeDraw(Snake* snake){

    printf("%c",snake->c);

}
