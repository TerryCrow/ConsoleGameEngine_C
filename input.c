#include <conio.h>
#include <winuser.h>

char getKeyDown(char c)
{
	if (GetAsyncKeyState(c) & 0x8000)
	{
		return 1;
	}
	return 0;
}