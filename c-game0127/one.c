#include <stdio.h>
#include <ncurses.h>



void one(int x, int y)
{
	init_pair(10, COLOR_BLACK, COLOR_WHITE);

	attrset(COLOR_PAIR(10));
	mvaddstr( y, x, "*");
	mvaddstr( y+1, x, "*");
	mvaddstr( y+1, x-1, "*");
	mvaddstr( y+2, x, "*");
	mvaddstr( y+3, x, "*");
	mvaddstr( y+4, x, "*");
	mvaddstr( y+4, x-1, "*");
	mvaddstr( y+4, x+1, "*");
}

