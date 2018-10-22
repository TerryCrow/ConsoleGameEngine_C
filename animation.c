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

void animation(int x, int y, char *screen, char *sprite, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (*((char *)sprite + c * i + j) != ' ')
				*((char *)screen + c * i + j) = *((char *)sprite + c * i + j);
		}
	}
}

// void drawStr(int x, int y, char *string ,int index)
// {
// 	for (int i = 0; i < index; i++)
// 	{
// 		pos(x, y + i);
// 		printf(string[i]);
// 	}
// }