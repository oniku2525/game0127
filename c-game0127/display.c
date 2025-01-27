#include <stdio.h>
#include <ncurses.h>
#include "zero.c"
#include "one.c"
#include "two.c"
#include "three.c"
#include "four.c"
#include "five.c"
#include "six.c"
#include "seven.c"
#include "eight.c"
#include "nine.c"

void display(int x, int y, int nextnum, int num)
{
	int nextx = x - 10;
	switch (nextnum) {
		case 0 : zero(nextx, y);
			 break;
		case 1 : one(nextx, y);
			 break;
		case 2 : two(nextx, y);
			 break;
		case 3 : three(nextx, y);
			 break;
		case 4 : four(nextx, y);
			 break;
		case 5 : five(nextx, y);
			 break;
		case 6 : six(nextx, y);
			 break;
		case 7 : seven(nextx, y);
			 break;
		case 8 : eight(nextx, y);
			 break;
		case 9 : nine(nextx, y);
			 break;
		default : break;
	}

	switch (num) {
		case 0 : zero(x, y);
			 break;
		case 1 : one(x, y);
			 break;
		case 2 : two(x, y);
			 break;
		case 3 : three(x, y);
			 break;
		case 4 : four(x, y);
			 break;
		case 5 : five(x, y);
			 break;
		case 6 : six(x, y);
			 break;
		case 7 : seven(x, y);
			 break;
		case 8 : eight(x, y);
			 break;
		case 9 : nine(x, y);
			 break;
		default : break;
	}
}

