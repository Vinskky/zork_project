#include <stdio.h>
#include "Room.h"

 Room::Room(int _x, int _y, char* _name, char* _description, char* _exits[4])
{
	x = _x;
	y = _y;
	name = _name;
	description = _description;
	exits[0] = _exits[0];
	exits[1] = _exits[1];
	exits[2] = _exits[2];
	exits[3] = _exits[3];
}

void Room::Look()
{
	printf(" %s \n %s \n %s \n %s \n %s \n %s \n", name, description, exits[0], exits[1], exits[2], exits[3]);
}