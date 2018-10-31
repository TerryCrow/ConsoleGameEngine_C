#include <conio.h>

char getKeys()
{
	while(1){
		int ch;
		if (_kbhit())
		{
			ch = _getch();
			return ch;
		}
	}
}