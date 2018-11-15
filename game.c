#include "input.c"
// #include "character.c"
#define SCREEN_W 80
#define SCREEN_H 30

char screen[SCREEN_H][SCREEN_W + 1];
char clear[] = "";
char test[] = "test";

int i, j;

void init()
{
	for (i = 0; i < SCREEN_H; i++)
	{
		for (j = 0; j < SCREEN_W; j++)
		{
			screen[i][j] = '-';
		}
		screen[i][j] = '\n';
	}
}

void update()
{
	if (getKeyDown('W'))
		screen[0][1] = 'W';

	if (getKeyDown('A'))
		screen[1][0] = 'A';

	if (getKeyDown('S'))
		screen[1][1] = 'S';

	if (getKeyDown('D'))
		screen[1][2] = 'D';

	if (getKeyDown('H'))
		screen[1][4] = 'H';

	if (getKeyDown('J'))
		screen[1][5] = 'J';

	if (getKeyDown(27))
		screen[1][7] = 'Q';
}

void updateAnim()
{
	// animation(1, 1, 1, *screen, SCREEN_W, SCREEN_H, test, 1, 4);
}