#include <vector>
#include <string>
#include "World.h"
#pragma once

using namespace std;

class Game
{

public:
	Game();
	Game(int width, int height);




private:
	// Constants
	char
		rook = '#',
		bishop = '^';

	vector<World> worlds;

};

