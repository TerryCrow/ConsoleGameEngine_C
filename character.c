#include <string.h>

struct Plane
{
	int health;
	int speed;
	int posX, posY;
	int width, height;
	char *sprite;
	char center;
} Plane = {1, 4, 0, 0, 3, 4, "abc", 'O'};

void initPlane()
{
	struct Plane plane;
	plane.sprite = "abc";
}
