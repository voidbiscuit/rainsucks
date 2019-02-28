#include <vector>
#include <string>
#include "World.h"
#pragma once

using namespace std;

class Game
{

public:
	// Init Game
	Game();

	// World Handling
	void addWorld(World world);
	World getWorld(string identifier);

private:
	// Constants
	char
		rook = '#',
		bishop = '^';

	vector<World> worlds;

};

