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
		// system("mode con cols=81 lines=31");
		hideCursor();
		pos(0, 0);
		printf("%s", screen); //output screen
		update(); //gameupdate
		updateAnim();
		// *screen = *clear;	 //clear screen
		Sleep(1000 / FPS);
	}
}

int main()
{
	init();
	gameLoop();
	return 0;
}