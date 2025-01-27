#include <stdio.h>
#include <string.h>
#include <ncurses.h>
/* 
* x:現在のx座標
* y:現在のy座標
*/

void enemy(int x,int y)
{
    init_pair(5, COLOR_BLACK, COLOR_WHITE);
    init_pair(6, COLOR_WHITE, COLOR_WHITE);
    //1
    attrset(COLOR_PAIR(5));
    mvaddch( y, x, '.');
    mvaddch( y, x+1, '-');
    mvaddch( y, x+2, '-');
    mvaddch( y, x+3, '.');

    //2
    mvaddch( y+1, x-1, '|');
    mvaddch( y+1, x, 'o');
    mvaddch( y+1, x+1, '_');
    mvaddch( y+1, x+2, 'o');
    mvaddch( y+1, x+3, ' ');
    mvaddch( y+1, x+4, '|');

    //3

    mvaddch( y+2, x-1, '|');
    mvaddch( y+2, x, ' ');
    mvaddch( y+2, x+1, ' ');
    mvaddch( y+2, x+2, ' ');
    mvaddch( y+2, x+3, ' ');
    mvaddch( y+2, x+4, '|');

    //4

    mvaddch( y+3, x-2, '/');
    mvaddch( y+3, x-1, '/');
    mvaddch( y+3, x, ' ');
    mvaddch( y+3, x+1, ' ');
    mvaddch( y+3, x+2, ' ');
    mvaddch( y+3, x+3, '\\');
    mvaddch( y+3, x+4, ' ');
    mvaddch( y+3, x+5, '\\');
    //5
   
    mvaddch( y+4, x-3, '(');
    mvaddch( y+4, x-2, '|');
    mvaddch( y+4, x-1, ' ');
    mvaddch( y+4, x, ' ');
    mvaddch( y+4, x+1, ' ');
    mvaddch( y+4, x+2, ' ');
    mvaddch( y+4, x+3, ' ');
    mvaddch( y+4, x+4, '|');
    mvaddch( y+4, x+5, ' ');
    mvaddch( y+4, x+6, ')');

    mvaddch( y+5, x-4, '/');
    mvaddch( y+5, x-3, '`');
    mvaddch( y+5, x-2, '\\');
    mvaddch( y+5, x-1, '_');
    mvaddch( y+5, x, ' ');
    mvaddch( y+5, x+1, ' ');
    mvaddch( y+5, x+2, ' ');
    mvaddch( y+5, x+3, '_');
    mvaddch( y+5, x+4, '/');
    mvaddch( y+5, x+5, '`');
    mvaddch( y+5, x+6, '\\');


    mvaddch( y+6, x-4, '\\');
    mvaddch( y+6, x-3, '_');
    mvaddch( y+6, x-2, '_');
    mvaddch( y+6, x-1, '_');
    mvaddch( y+6, x, '_');
    mvaddch( y+6, x+1, ')');
    mvaddch( y+6, x+2, '=');
    mvaddch( y+6, x+3, '(');
    mvaddch( y+6, x+4, '_');
    mvaddch( y+6, x+5, '_');
    mvaddch( y+6, x+6, '/');
}
