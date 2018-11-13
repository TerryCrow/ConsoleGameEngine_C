#include <windows.h>

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

//hide cursor
void hideCursor()
{
	CONSOLE_CURSOR_INFO cci = {1, 0};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}

//animation locates x, y and screen with sprite and sprite's height, width
void animations(int posX, int posY, char *screen, char *sprite, int height, int width)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (!((char *)sprite + width * i + j) == ' ')
				*((char *)screen + width * i + j) = *((char *)sprite + width * i + j);
		}
	}
}

/**
 * Function animation : draw sprite on screen
 * Paramaters :
 * int animSpeed : current sprite draw frames
 * int posX : current sprite draw witch position X
 * int posY : current sprite draw witch position X
 * char *screen : put sprite into screen buffer
 * int SCREEN_X : screen's width
 * int SCREEN_Y : screen's height
 * char *sprite : gameobject's sprite
 * int height : current sprite's height
 * int width : current sprite's width
 */
void animation(int animSpeed, int posX, int posY, char *screen, int SCREEN_X, int SCREEN_Y, char *sprite, int height, int width)
{
	// for (int h = 0; h < animSpeed; h++)
	// {
	for (int i = posY; i < height; i++)
	{
		for (int j = posX; j < width; j++)
		{
			// screen[i][j] = sprite[i][j];
			// *((char *)screen + width * i + j) = 't';
			// printf("bingo");
		}
	}
	// }
}
