#include "Game.h"


Game::Game()
{

}


void Game::addWorld(World world) {
	for (int world_id = 0; world_id < this->worlds.size(); world_id++)
		if (worlds[world_id].getIdentifier() == world.getIdentifier())
			return;
	worlds.push_back(world);
}

World Game::getWorld(string identifier) {
	for (int world_id = 0; world_id < this->worlds.size(); world_id++)
		if (worlds[world_id].getIdentifier() == identifier)
			return worlds[world_id];
	return NULL;
}