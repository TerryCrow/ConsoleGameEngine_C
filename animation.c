#include <windows.h>

void pos(int x, int y)
{
	COORD pos;
	HANDLE hOutput;
	pos.X = x;
	pos.Y = y;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOutput, pos);
}

void hideCursor()
{
	CONSOLE_CURSOR_INFO cci = {1, 0};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}

void animation(int posX, int posY, char *screen, char *sprite, int height, int width)
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
