#include <stdio.h>
#include <ncurses.h>

int judgment(int x, int y, int ax, int ay)
{
	int i;
	int yn[7] = {y, y+1, y+2, y+3, y+4, y+5, y+6};

	for (i = 0; i <= 6; i++) {
		if (yn[i] == ay) {
			if (yn[i] = y) {
				if (x == ax) return (1);
			}

			if (yn[i] == y+1 || yn[i] == y+2) {
				if (x-1 == ax) return (1);
			}

			if (yn[i] == y+3) {
				if (x-2 == ax) return (1);
			}

			if (yn[i] == y+4) {
				if (x-3 == ax) return (1);
			}

			if (yn[i] == y+5 || yn[i] == y+6) {
				if (x-4 == ax) return (1);
			}
		}
	}

	return (0);
}



