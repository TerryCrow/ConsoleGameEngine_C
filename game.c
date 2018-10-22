#include "character.c"

#define SCREEN_X 80
#define SCREEN_Y 30

char screen[] = "";

void initOnWindows()
{
	system("mode con cols=81 lines=31");
	for (int i = 0; i < SCREEN_Y; i++)
	{
		for (int j = 0; j < SCREEN_X; j++)
		{
			strcat(screen, "A");
		}
		strcat(screen, "\n");
	}
}

void initOnLinux()
{
	system("mode con cols=81 lines=31");
	for (int i = 0; i < SCREEN_Y; i++)
	{
		for (int j = 0; j < SCREEN_X; j++)
		{
			strcat(screen, "\033[0m");
			strcat(screen, "A");
		}
		strcat(screen, "\n");
	}
}

void update()
{
}