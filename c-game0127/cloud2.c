#include <stdio.h>
#include <string.h>
#include <ncurses.h>

/* 
* x:現在のx座標
* y:現在のy座標
*/

void cloud2(int x,int y)
{
    init_pair(8, COLOR_BLACK, COLOR_WHITE);
    init_pair(9, COLOR_BLUE, COLOR_WHITE);
    //1
    attrset(COLOR_PAIR(9));
    mvaddch( y, x+3, '.');
    mvaddch( y, x+4, '-');
    mvaddch( y, x+5, '-');
    mvaddch( y, x+6, '.');

    //2
    mvaddch( y+1, x-3, '.');
    mvaddch( y+1, x-2, '-');
    mvaddch( y+1, x-1, '(');
    mvaddch( y+1, x, ' ');
    mvaddch( y+1, x+1, ' ');
    mvaddch( y+1, x+2, ' ');
    mvaddch( y+1, x+3, ' ');
    mvaddch( y+1, x+4, ')');
    mvaddch( y+1, x+5, '.');

    //3
    mvaddch( y+2, x-4, '(');
    mvaddch( y+2, x-3, '_');
    mvaddch( y+2, x-2, '_');
    mvaddch( y+2, x-1, '_');
    mvaddch( y+2, x, '.');
    mvaddch( y+2, x+1, '_');
    mvaddch( y+2, x+2, '_');
    mvaddch( y+2, x+3, ')');
    mvaddch( y+2, x+4, '_');
    mvaddch( y+2, x+5, '_');
    mvaddch( y+2, x+6, ')');

}
