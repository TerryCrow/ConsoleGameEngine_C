#include "input.c"
// #include "character.c"

#define SCREEN_X 80
#define SCREEN_Y 30

char screen[] = "";
char clear[] = "";
char test[] = "test";

void init()
{
	// char s_x[] = "";
	// char s_y[] = "";
	// sprintf(s_x, "%d", SCREEN_X + 1);
	// sprintf(s_y, "%d", SCREEN_Y + 1);
	// system(strcat(strcat("mode con cols=", s_x), strcat(" lines=", s_y)));
	system("mode con cols=81 lines=31");
	for (int i = 0; i < SCREEN_Y; i++)
	{
		for (int j = 0; j < SCREEN_X; j++)
		{
			strcat(screen, " ");
		}
		strcat(screen, "\n");
	}
	// *clear = *screen;
}

void update()
{
	// animation(1, 1, 1, screen, SCREEN_X, SCREEN_Y, test, 1, 4);

	if (getKeyDown('W'))
	{
		pos(1, 0);
		printf("W");
	}
	if (getKeyDown('A'))
	{
		pos(0, 1);
		printf("A");
	}
	if (getKeyDown('S'))
	{
		pos(1, 1);
		printf("S");
	}
	if (getKeyDown('D'))
	{
		pos(2, 1);
		printf("D");
	}
	if (getKeyDown('J'))
	{
		pos(4, 1);
		printf("J");
	}
	if (getKeyDown('K'))
	{
		pos(5, 1);
		printf("K");
	}
	if (getKeyDown(27))
	{
		pos(7, 1);
		printf("Q");
	}
}

void updateAnim()
{
	animation(1, 1, 1, screen, SCREEN_X, SCREEN_Y, test, 1, 4);
}