#include <stdio.h>
#include <string.h>
#include <ncurses.h>

/* 
* x:現在のx座標
* y:現在のy座標
*/

void attack(int x,int y)
{
    init_pair(7, COLOR_RED, COLOR_WHITE);
    //1
    	attrset(COLOR_PAIR(7));
	mvaddch( y, x+2, '>');
	mvaddch( y, x+1, '-');

}
