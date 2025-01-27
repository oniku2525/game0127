#include <stdio.h>
#include <ncurses.h>



void four(int x, int y)
{
	init_pair(14, COLOR_BLACK, COLOR_WHITE);

	attrset(COLOR_PAIR(10));
	mvaddstr( y, x-1, "*");
	mvaddstr( y, x+1, "*");
	mvaddstr( y+1, x-1, "*");
	mvaddstr( y+1, x+1, "*");
	mvaddstr( y+2, x-1, "*");
	mvaddstr( y+2, x, "*");
	mvaddstr( y+2, x+1, "*");
	mvaddstr( y+3, x+1, "*");
	mvaddstr( y+4, x+1, "*");
}

