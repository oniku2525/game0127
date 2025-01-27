#include <stdio.h>
#include <string.h>
#include <ncurses.h>

void back(int w, int h)
{
	int x, y;

    	init_pair(1, COLOR_GREEN, COLOR_WHITE);
    	init_pair(2, COLOR_WHITE, COLOR_WHITE); //tab spaceで語句を飛ばせる

	 bkgd(COLOR_PAIR(2));
	 attrset(COLOR_PAIR(1));
	 y = h/3*2;
   	 for (x = 0; x <= w; x++) {
		 mvaddstr( y, x, "#");
		 mvaddstr( y+1, x, "#");
		 mvaddstr( y+2, x, "#");
	 }
}

//メモ
/*

*/
