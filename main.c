#include <stdio.h>
#include <string.h>
#include "animation.c"
#include "game.c"

#define PAUSE 0
#define PLAY 1
#define GAMEOVER 2

#define FPS 20

void gameLoop()
{
	while (1)
	{
		hideCursor();
		pos(0, 0);
		update();
		printf("%s", screen);
		Sleep(1000 / FPS);
	}
}

int main()
{
	initOnWindows();
	// initOnLinux();
	gameLoop();
	return 0;
}