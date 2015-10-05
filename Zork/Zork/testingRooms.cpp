#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

class Room
{
public:
	char* intro = "Welcome to the world of zork a huge adventure is waiting for you, breace yourself and go! \n";
	char* name = "now you are at the ";
	char* north = NULL;
	char* east = NULL;
	char* west = NULL;
	char* south = NULL;
private:
};

class Cabin :public class Room
{
public:
	char* intro = "You're inside this cabin its comfortable inside but there's nothing to eat maybe its time to hunt \n";
	char* north = "At the north of the cabin you can see a pitfire and the head of a pig looking at you \n";
	char* east = NULL;
	char* west = "there's a door that conects with the world at west of the cabin \n";
	char* south = "at south you have a window \n";
	char* window = "All what you can see is darkness and an uncomfortable ambient \n";
	void Look()
	{
		cout << intro << north << east << west << south << endl;
	}
private:
};

int main(int argc, char* argv)
{
	bool end = false;
	Room forest;
	Cabin cabin;
	int x = 2, y = 3;
	char* map[4][4] = 
	{ "Forest1", "Forest2", "Forest3", "Forest4" 
	"Forest5", "PoisonLake", "Forest6", "Forest7"
	"Forest8", "Cabin", "Forest9", "Bigtree"
	"Forest10", "Ritual Place","Forest11", "Forest12"
	}
	cabin.look();
	cout << "what its your plan now? \n";
	while (!end)
	{
		string comand;
		geline(cin, comand);
		if (comand == "window" && x == 2 && y == 3)
		{
			cout << cabin.window;
		}
		else if (comand == "window" && x == 2 && y == 3)
	}
}

