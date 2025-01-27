#include <stdio.h>
#include <string.h>
#include <ncurses.h>

/* 
* x:現在のx座標
* y:現在のy座標
*/

void e_attack(int x,int y)
{
    init_pair(13, COLOR_BLUE, COLOR_WHITE);
    //1
    	attrset(COLOR_PAIR(13));
	mvaddch( y, x-2, '<');
	mvaddch( y, x-1, '-');

}
