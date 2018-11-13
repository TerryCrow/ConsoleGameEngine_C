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
		init();
		update(); //gameupdate
		updateAnim();
		printf("%s", screen); //output screen
		// *screen = *clear;	 //clear screen
		Sleep(1000 / FPS);
	}
}

int main()
{
	system("mode con cols=80 lines=30");
	init();
	gameLoop();
	return 0;
}