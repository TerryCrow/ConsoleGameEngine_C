#include "input.c"
// #include "character.c"
#define SCREEN_X 80
#define SCREEN_Y 30

// char screen[(SCREEN_X + 1) * SCREEN_Y];
char screen[SCREEN_Y][SCREEN_X];
char clear[] = "";
char test[] = "test";

int i, j;

void init()
{
	// char *s_x = "";
	// char *s_y = "";
	// sprintf(s_x, "%d", SCREEN_X + 1);
	// sprintf(s_y, "%d", SCREEN_Y + 1);
	// system(strcat(strcat("mode con cols=", 81), strcat(" lines=", 31)));
	for (i = 0; i < SCREEN_Y; i++)
	{
		for (j = 0; j < SCREEN_X; j++)
		{
			screen[i][j] = ' ';
		}
		// screen[i][j + 1] = '\n';
		// strcat(screen, "\n");
	}
}

void update()
{
	if (getKeyDown('W'))
	{
		screen[0][1] = 'W';
	}
	if (getKeyDown('A'))
	{
		screen[1][0] = 'A';
	}
	if (getKeyDown('S'))
	{
		screen[1][1] = 'S';
	}
	if (getKeyDown('D'))
	{
		screen[1][2] = 'D';
	}
	if (getKeyDown('J'))
	{
		screen[1][4] = 'J';
	}
	if (getKeyDown('K'))
	{
		screen[1][5] = 'K';
	}
	if (getKeyDown(27))
	{
		screen[1][7] = 'Q';
	}
}

void updateAnim()
{
	// animation(1, 1, 1, *screen, SCREEN_X, SCREEN_Y, test, 1, 4);
}