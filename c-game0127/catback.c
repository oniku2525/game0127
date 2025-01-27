#include <stdio.h>
#include <string.h>
#include <ncurses.h>

/* 
* x:現在のx座標
* y:現在のy座標
*/

void catback(int x,int y)
{
    init_pair(3, COLOR_BLACK, COLOR_WHITE);
    init_pair(4, COLOR_WHITE, COLOR_WHITE);
    //1
    attrset(COLOR_PAIR(3));
    mvaddch( y, x, '|');
    mvaddch( y, x+1, '\\');
    mvaddch( y, x+2, '_');
    mvaddch( y, x+3, '_');
    mvaddch( y, x+4, '/');
    mvaddch( y, x+5, '\\');
    mvaddch( y, x+6, '_');
    mvaddch( y, x+7, ' ');

    //2
    mvaddch( y+1, x, '|');
    mvaddch( y+1, x+1, ' ');
    mvaddch( y+1, x+2, ' ');
    mvaddch( y+1, x+3, ' ');
    mvaddch( y+1, x+4, ' ');
    mvaddch( y+1, x+5, ' ');
    mvaddch( y+1, x+6, ' ');
    mvaddch( y+1, x+7, '|');

    //3

    mvaddch( y+2, x, '|');
    mvaddch( y+2, x+1, 'o');
    mvaddch( y+2, x+2, ' ');
    mvaddch( y+2, x+3, ' ');
    mvaddch( y+2, x+4, ' ');
    mvaddch( y+2, x+5, 'o');
    mvaddch( y+2, x+6, ' ');
    mvaddch( y+2, x+7, '|');

    //4

    mvaddch( y+3, x+1, '/');
    mvaddch( y+3, x+2, ' ');
    mvaddch( y+3, x+3, ' ');
    mvaddch( y+3, x+4, ' ');
    mvaddch( y+3, x+5, ' ');
    mvaddch( y+3, x+6, '\\');
    mvaddch( y+3, x+7, ' ');
    //5
   
    mvaddch( y+4, x, '/');
    mvaddch( y+4, x+1, '|');
    mvaddch( y+4, x+2, ' ');
    mvaddch( y+4, x+3, ' ');
    mvaddch( y+4, x+4, '|');
    mvaddch( y+4, x+5, '_');
    mvaddch( y+4, x+6, '|');
    mvaddch( y+4, x+7, '/');
    //6
    
    mvaddch( y+5, x+1, '|');
    mvaddch( y+5, x+2, '_');
    mvaddch( y+5, x+3, '/');
    mvaddch( y+5, x+4, '\\');
    mvaddch( y+5, x+5, '_');
    mvaddch( y+5, x+6, '|');
}
