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
		Sleep(1000 / FPS);
	}
}

int main()
{
	char sys_code[100];
	sprintf(sys_code, "mode con cols=%d lines=%d", SCREEN_W + 1, SCREEN_H + 1);
	system(sys_code);
	init();
	gameLoop();
	return 0;
}