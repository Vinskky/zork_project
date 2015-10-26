#ifndef _Room_H_
#define _Room_H_

class Room
{
private:
	int x,y;
public:
	char* name;
	char* description;
	char* exits[4] = {NULL, NULL, NULL, NULL};
	Room(int x, int y,char* _name, char* _description, char* _exits[4]);
	void Look();
};

#endif _Room_H_