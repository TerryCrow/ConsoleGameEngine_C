#include <stdio.h>
#include <string.h>
#include <windows.h>

#define SCREEN_X 80
#define SCREEN_Y 40

#define FPS 20

int len = SCREEN_X * SCREEN_Y;
char *screen;

void setScreen(int len){
	screen[len];//TODO not working
}

char clear[] = "";

void hideCursor()
{
	CONSOLE_CURSOR_INFO cci = {1, 0};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}

//move cursor to location
void pos(int x, int y)
{
	COORD pos;
	HANDLE hOutput;
	pos.X = x;
	pos.Y = y;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOutput, pos);
}

char *init()
{
	setScreen(len);
	for (int i = 0; i < SCREEN_Y; i++)
	{
		for (int j = 0; j < SCREEN_X; j++)
		{
			*((char *)screen + SCREEN_X * i + j) = '-';
		}
		*((char *)screen + SCREEN_X * i) = '\n';
	}
	return screen;
}

char anim(int posX, int posY, int height, int width)
{
	for (int i = posY; i < height; i++)
	{
		for (int j = posX; j < width; j++)
		{
			*((char *)screen + width * i + j) = 't';
		}
	}
	return 1;
}

void update()
{
	while (1)
	{
		hideCursor();
		pos(0, 0);
		anim(5, 5, 2, 4);
		printf("%s", screen); //output screen
		Sleep(1000 / FPS);
	}
}

int main()
{
	// *clear = init();
	init();
	update();
	return 0;
}